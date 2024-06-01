#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 

int a[ 505 ][ 505 ]; 
int f[ 505 ][ 505 ];
int main(){
	int t ; cin >> t ; 
	while( t-- ){
		int n , m; cin >> n >> m ; 
		for( int i = 1 ; i <= n; i ++ ){
			for( int j = 1 ; j <= m ; j ++ ) cin >> a[ i ][ j ] ; 
		}
		for( int i = 1 ; i <= n ; i ++ )f[ i ][ 1 ] = a[ i ][ 1 ] ; 
		for( int j = 1 ; j <= m ; j ++ )f[ 1 ][ j ] = a[ 1 ][ j ] ;
		
		int maxx = 0 ; 
		for( int i = 2 ; i <= n ; i ++ ){
			for( int j = 2 ; j <= m ; j ++ ){
				if ( a[ i ][ j ] == 1 ){
					f[ i ][ j ] = min ( { f[ i - 1 ][ j ] , f[ i ][ j - 1 ] , f[ i - 1 ][ j - 1 ] } ) + 1 ; 
					maxx = max( maxx , f[ i ][ j ] ) ;
				} 
				else f[ i ][ j ] = 0 ; 
			}
		}
		cout << maxx << endl;
	}
	return 0 ; 
}