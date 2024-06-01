#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
int n , x ; 
int a[ 100 ]; 
vector<vector<int>> res ; 
vector<int> v ; 

void back( int prev , int sum ){
	for( int i = prev ; i < n ; i ++ ){
		if( sum + a[ i ] <= x ){
			v.push_back( a[ i ] ); 
			if ( sum + a[ i ] == x ){
				res.push_back( v ); 
			}
			else back( i , sum + a[ i ] ); 
			v.pop_back();
		}
	}
}


int main(){
	int t ; cin >> t ; 
	while( t-- ){
		res.clear();
		cin >> n >> x ; 
		for( int i = 0 ; i < n ; i ++ )cin >> a[ i ];  
		sort( a , a + n ); 
		back( 0 , 0 ); 
		if ( res.empty() ){
			cout << "-1\n";
		}
		else {
			cout << res.size() << " " ; 
			for( int i = 0 ; i < res.size() ; i ++ ){
				cout << "{"; 
				for( int j = 0 ; j < res[ i ].size() ;j ++ ){
					cout << res[ i ][ j ]; 
					if ( j != res[ i ].size() - 1 )cout << " " ; 
				}
				cout << "} ";
			}
			cout << endl;
		}
	}
	
	return 0 ; 
}