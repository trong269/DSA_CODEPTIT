#include<bits/stdc++.h>
using namespace std ; 


int main(){
	int t ; cin >> t ; 
	while( t -- ){
		int n ; cin >> n ; 
		int a[ n ]; 
		for( auto&x : a ) cin >> x ; 
		int minx1 = 1e9 , minx2 = 1e9 ; 
		for( auto x : a )minx1 = min( minx1 , x );
		for( int i = 0 ; i < n; i ++ ){
			if( a[ i ] < minx2 && a[ i ] > minx1 ){
				minx2 = a[ i ] ; 
			}
		}
		if ( minx2 == 1e9 ){
			cout << -1 << endl;
		}
		else{
			cout << minx1 << " " << minx2 << endl;
		}
	}
	
	return 0 ; 
}