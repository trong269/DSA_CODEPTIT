#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 
int f1[ 100005 ], f2[ 100005 ];

int main(){
	int t ; cin >> t; 
	while(t -- ){
		int n ; cin >> n ; 
		int a[ n ] ; 
		for( auto &x : a ) cin >> x; 
		f1[ 0 ] = 1 ; 
		for( int i = 1 ; i < n ; i ++ ){
			if ( a[ i - 1 ] < a[ i ] ){
				f1[ i ] = f1[ i - 1 ] + 1 ; 
			}
			else f1[ i ] = 1 ; 
		}
		f2[ n - 1 ] = 1 ; 
		for( int i = n - 2 ; i >= 0 ; i -- ){
			if ( a[ i ] > a[ i + 1 ] ){
				f2[ i ] = f2[ i + 1 ] + 1 ; 
			}
			else f2[ i ] = 1 ; 
		}
		int maxx = 0 ; 
		for( int i = 0 ; i < n ; i ++ ){
			maxx = max( maxx , f1[ i ] + f2[ i ] - 1 );
		}
		cout << maxx << endl;
	}
	
	return 0 ; 
}