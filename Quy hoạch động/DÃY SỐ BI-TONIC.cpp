#include<bits/stdc++.h>
using namespace std ; 
#define ll long long

int f1[ 105 ] , f2[ 105 ];

int main(){
	int t ; cin >> t ; 
	while( t -- ){
		int n; cin >> n ; 
		int a[ n ] ; 
		for( int i = 0 ; i < n ; i ++ ){
			cin >> a[ i ] ; 
		}
		f1[ 0 ] = a[ 0 ];
		for( int i = 1 ; i < n ; i ++ ){
			f1[ i ] = a[ i ] ;
			for( int j = 0 ; j < i ; j ++ ){
				if ( a[ j ] < a[ i ] ){
					f1[ i ] = max( f1[ i ] , f1[ j ] + a[ i ] );
				}
			} 
		}
		f2[ n - 1 ] = a[ n - 1 ] ; 
		for( int i = n - 2 ; i >= 0 ; i -- ){
			f2[ i ] = a[ i ] ; 
			for( int j = n - 1 ; j > i ; j -- ){
				if ( a[ j ] < a[ i ] ){
					f2[ i ] = max( f2[ i ] , a[ i ] + f2[ j ] ) ; 
				}
			}
		}
		int maxx = -1e9 ; 
		for( int i = 0 ; i < n; i ++ ){
			maxx = max( maxx , f1[ i ] + f2[ i ] - a[ i ] );
		}
		cout << maxx << endl;
	}
	
	return 0 ; 
}