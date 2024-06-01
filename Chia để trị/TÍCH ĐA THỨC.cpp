#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
ll mod = 1e9 + 7;


int main(){
	int t ; cin >> t ; 
	while( t -- ){
		int n , m ; cin >> n >> m ; 
		int p[ n ] , q[ m ] , r[ ( n - 1 ) + ( m - 1 ) + 1 ]; 
		for( auto &x : p ) cin >> x ; 
		for( auto &x : q ) cin >> x ; 
		for( auto &x : r ) x = 0 ; 
		for( int i = 0 ; i < n ; i ++ ){
			for( int j = 0 ; j < m ; j ++ ){
				int tmp = p[ i ] * q[ j ] ; 
				r[ i + j ] += tmp ; 
			}
		}
		for( auto x : r ) cout << x << " " ; 
		cout << endl;
	}
	
	return 0 ; 
}