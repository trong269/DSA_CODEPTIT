#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 
int mod = 1e9 + 7; 

int f[25005][ 105 ]; 

int main(){
	int c, n ; cin >> c >> n ; 
	int a[ 105 ]; 
	for( int i = 1; i <= n ; i ++ )cin >> a[ i ];  
	for( int i = 0 ; i <= c ; i ++ )f[ i ][ 0 ] = 0 ; 
	for( int i = 0 ; i <= n ; i ++ )f[ 0 ][ i ] = 0 ;  
	for( int i = 1; i <= c ; i ++ ){
		for( int j = 1 ; j <= n ; j ++ ){
			f[ i ][ j ] = f[ i ][ j - 1 ] ; 
			if ( a[ j ] < i ){
				if ( a[ j ] + f[ i - a[ j ] ][ j - 1 ] > f[ i ][ j - 1 ] ){
					f[ i ][ j ] = a[ j ] + f[ i - a[ j ] ][ j - 1 ] ; 
				}
			}
		}
	}
	cout << f[ c ][ n ] ; 
	return 0 ; 
}