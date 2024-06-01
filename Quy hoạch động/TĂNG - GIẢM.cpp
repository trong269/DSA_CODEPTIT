#include<bits/stdc++.h>
using namespace std ; 
#define ll long long


int main(){
	int t ; cin >> t ; 
	while( t-- ){
		int n ; cin >> n ; 
		float a[ n ], b[ n ];
		for( int i = 0 ; i < n ; i ++ ){
			cin >> a[ i ];
			cin >> b[ i ]; 
		}
		ll maxx = 1 ; 
		ll f[ 1000 ] ;
		f[ 0 ] = 1 ; 
		for( int i = 1 ; i < n ; i ++ ){
			f[ i ] = 1; 
			for( int j = 0 ; j < i ; j ++ ){
				if ( a[ j ] < a[ i ] && b[ j ] > b[ i ] ){
					f[ i ] = max( f[ i ] , f[ j ] + 1 );
				}
			}
			maxx = max( maxx , f[ i ] );
		}
		cout << maxx << endl;
	} 
	
	return 0 ; 
}