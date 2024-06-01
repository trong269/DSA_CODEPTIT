#include<bits/stdc++.h>
using namespace std ; 
#define ll long long


int main(){
	int t ; cin >> t  ; 
	while( t -- ){
		int n ; cin>> n ; 
		int a[ n ]; 
		for( auto &x : a )cin >> x ; 
		int minx =  1e9 + 7 ; 
		sort( a , a + n ); 
		for( int i = 0 ; i < n - 1  ; i ++ )minx = min( a[ i + 1 ] - a[ i ] , minx ); 
		cout << minx << endl;
		
	}
	return 0 ; 
}