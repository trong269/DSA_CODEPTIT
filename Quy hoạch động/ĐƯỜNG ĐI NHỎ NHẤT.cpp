#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 

ll a[ 1005 ][ 1005 ];
ll f[ 1005 ][ 1005 ];

int main(){
	int t ; cin >> t; 
	while( t-- ){
		int n , m ; cin >> n >> m ; 
		for( int i = 1 ; i <= n ; i ++ ){
			for( int j = 1 ; j <= m ; j ++ )cin >> a[ i ][ j ] ; 
		}
		for( int i = 1 ; i <= n; i ++ ){
			f[ i ][ 1 ] = f[ i - 1 ][ 1 ] + a[ i ][ 1 ] ; 
		}
		for( int j = 1 ; j <= m ; j ++ ){
			f[ 1 ][ j ] = f[ 1 ][j - 1 ] + a[ 1 ][ j ] ; 
		}
		for( int i = 2 ; i <= n ; i ++ ){
			for( int j = 2 ; j <= m ; j ++ ){
				f[ i ][ j ] = min( { f[ i - 1 ][ j ] , f[ i ][ j - 1 ] , f[ i - 1 ][ j - 1 ] } ) + a[ i ][ j ] ; 
			}
		}
		cout << f[ n ][ m ] << endl;
	}
	
	return 0 ; 
}