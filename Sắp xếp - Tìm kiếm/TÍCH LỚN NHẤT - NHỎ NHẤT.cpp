#include<bits/stdc++.h>
using namespace std ; 
#define ll long long


int main(){
	int t ; cin >> t; 
	while( t -- ){
		ll n , m ; cin >> n >> m ; 
		ll a[ n ] , b[ m ]; 
		for( auto &x : a ) cin >> x ;
		for( auto &x : b ) cin >> x ; 
		 
		sort( a , a + n ) ; 
		sort( b , b + m ) ; 
		cout << a[ n - 1 ] * b[ 0 ] << endl;
	}
	return 0 ; 
}