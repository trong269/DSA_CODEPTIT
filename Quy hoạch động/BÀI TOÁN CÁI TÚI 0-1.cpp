#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 
int mod = 1e9 + 7; 

int f[ 1005 ][ 1005 ]; 
int a[ 1005 ];
int c[ 1005 ];

int main(){
	int t ; cin >> t ; 
	while( t-- ){
		int n , v ; cin >> n >> v ; 
		for( int i = 1 ; i <= n ; i ++ )cin >> a[ i ]; 
		for( int i = 1 ; i <= n ; i ++ )cin >> c[ i ];	 
		
		for( int i = 0 ; i <= n; i ++ )f[ 0 ][ i ] = 0 ; 
		for( int i = 0 ; i <= v ; i ++ )f[ i ][ 0 ] = 0 ; 
		
		for( int i = 1 ; i <= v ; i ++ ){
			for( int j = 1 ; j <= n ; j ++ ){
				f[ i ][ j ] = f[ i ][ j - 1 ] ; 
				if ( a[ j ] <= i ){
					if ( c[ j ] + f[ i - a[ j ] ][ j - 1 ] > f[ i ][ j - 1 ] ){
						f[ i ][ j ] = c[ j ] + f[ i - a[ j ] ][ j - 1 ] ;
					}
				}
			}
		}
		cout << f[ v ][ n ] << endl;
	}
	
	return 0 ; 
}