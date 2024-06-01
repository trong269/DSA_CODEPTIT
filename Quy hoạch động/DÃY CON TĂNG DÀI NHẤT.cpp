#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 

int main(){
	int n ; cin >> n ; 
	int a[ n ]; 
	int f[ n ];
	for( auto&x : a ) cin >> x ; 
	int maxx = -1e9 ; 
	for( int i = 0 ; i < n ; i ++ ){
		f[ i ] = 1 ; 
		for( int j = 0 ; j < i ; j ++ ){
			if ( a[ j ] < a[ i ] ){
				f[ i ] = max( f[ i ] , f[ j ] + 1 );
			}
		}
		maxx = max( maxx , f[ i ] ); 
	}
	cout << maxx ; 
	
	return 0 ; 
}

