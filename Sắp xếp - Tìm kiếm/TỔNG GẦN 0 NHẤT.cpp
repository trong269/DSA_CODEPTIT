#include<bits/stdc++.h>
using namespace std ; 
#define ll long long


int main(){
	int t ; cin >> t; 
	while( t -- ){
		int n  ; cin >> n  ; 
		int a[ n ] ; 
		for( auto &x : a ) cin >> x ; 
		int minx = 1e9 ; 
		int res = -1 ; 
		for( int i = 0; i < n; i ++ ){
			for( int j = i + 1 ; j < n ; j ++ ){
				if ( minx > abs ( a[ i ] + a[ j ] ) ){
					minx = abs ( a[ i ] + a[ j ] ); 
					res = a[ i ] + a[ j ] ; 
				}
			}
		}
		cout << res << endl;
	}
	return 0 ; 
}