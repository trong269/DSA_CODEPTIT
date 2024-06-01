#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 

int dp[ 1005 ]; 

int main(){
	int t ; cin >> t ; 
	while( t-- ){
		int n; cin >> n ; 
		int a[ n ]; 
		for( auto &x : a ) cin >> x ; 
		dp[ 0 ] = a[ 0 ] ; 
		for( int i = 1 ; i < n ; i ++ ){
			dp[ i ] = a[ i ] ; 
			for( int j = 0 ; j < i ; j ++ ){
				if ( a[ j ] < a[ i ] ){
					dp[ i ] = max( dp[ i ] , dp[ j ] + a[ i ] ) ; 
				}
			}
		}
		int maxx = -1e9 ; 
		for( int i = 0 ; i < n; i ++ )maxx = max( maxx , dp[ i ] ) ; 
		cout << maxx << endl;
	}
	
	return 0 ; 
}