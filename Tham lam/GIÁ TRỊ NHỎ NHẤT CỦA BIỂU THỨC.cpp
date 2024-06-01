#include<bits/stdc++.h>
using namespace std ; 
#define ll long long

int main(){
	int t ; cin >> t; 
	while( t -- ){
		int n ; cin >> n ; 
		ll a[ n ], b[ n ]; 
		for( auto &x : a ) cin >> x ; 
		for( auto &x : b ) cin >> x ; 
		sort( a , a + n ); 
		sort( b , b + n , greater<int>() );
		ll sum = 0 ; 
		for( int i = 0 ; i < n ; i ++ ){
			sum += a[ i ] * b[ i ] ; 
		}
		cout << sum << endl;
	}
	
	return 0 ; 
}