#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 

ll dp[ 1000005 ];
ll a[ 1000005 ];
int main(){
	int t ; cin >> t ; 
	while( t-- ){
		int n ; cin >> n ; 
		for( int i = 1 ; i <= n ; i ++ ) cin >> a[ i ] ; 
		dp[ 0 ] = 0 ; 
		dp[ 1 ] = a[ 1 ] ; 
		for( int i = 2 ; i <= n ; i ++ ){
			dp[ i ] = max(dp[ i - 1 ] , a[ i ] + dp[ i - 2 ] ) ; 
		}
		cout <<dp[ n ] << endl;
	}
	
	return 0 ; 
}