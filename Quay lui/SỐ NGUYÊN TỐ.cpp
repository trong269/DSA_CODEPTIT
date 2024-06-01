#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 
int s , p , n ; 
vector<vector<int>> res ; 
vector<int>v; 
bool nt ( int n ){
	for( int i = 2 ; i <= sqrt( n ) ; i ++ ){
		if ( n % i == 0 )return false ; 
	}
	return n > 1 ; 
}

void back( int prev , int sum ){
	for( int i = prev + 1; i <= s - sum; i ++ ){
		if( nt( i ) and sum + i <= s ){ 
			v.push_back( i );
			if ( sum + i == s ){
				if ( v.size() == n ){
					res.push_back( v );
				}
			}
			else back( i, sum + i );
			v.pop_back( );
		}
	}
}

int main(){
	int t ; cin >> t ; 
	while( t -- ){
		v.clear();
		res.clear();
		cin >> n >> p >> s; 
		back( p, 0 ); 
		cout << res.size() << endl;
		if ( !res.empty() ){
			for( auto x : res ){
				for( auto y : x ){
					cout << y << " " ; 
				}
				cout << endl;
			}
		}
	}
	
	return 0 ; 
}