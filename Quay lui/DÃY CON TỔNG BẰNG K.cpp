#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
int n , k ; 
int a[ 100 ];
vector<int> v ; 
vector<vector<int>> res ; 
void display(){
	vector<int> tmp;
	for( auto i : v ){
		tmp.push_back( a[ i ] ); 
	}
	res.push_back(tmp) ; 
}

void back( int prev , int sum ){
	for( int i = prev + 1 ; i <= n ; i ++ ){
		if ( sum + a[ i ] <= k ){
			v.push_back( i ) ; 
			if( sum + a[ i ] == k ){
				display();
			}
			else back( i , sum + a[ i ] ) ; 
			v.pop_back();
		}
	}
}

int main(){
	int t ; cin >> t; 
	while( t-- ){
		res.clear();
		cin >> n >> k ; 
		for( int i = 1 ; i <= n; i ++ ) cin >> a[ i ] ; 
		sort( a + 1 , a + n + 1 ); 
		back( 0 , 0 ) ; 
		if( res.empty() ){
			cout << "-1\n";
		}
		else{
			sort( res.begin() , res.end() );
			for( auto x : res ){
				cout << "[" ; 
				for( int i = 0 ; i < x.size() ; i ++ ){
					cout << x[ i ]; 
					if ( i != x.size() - 1 ) cout << " " ; 
				}
				cout << "] ";
			}
			cout << endl;
		}
	}
	return 0 ; 
}