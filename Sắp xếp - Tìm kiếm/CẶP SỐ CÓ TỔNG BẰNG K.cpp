#include<bits/stdc++.h>
using namespace std ; 
#define ll long long


int main(){
	int t ; cin >> t ; 
	while( t -- ){
		ll n , k ; cin >> n >> k ; 
		ll a[ n ]; 
		for( auto &x : a )cin >> x ;
		map<ll,ll> mp ;   
		for( auto x : a ) mp[ x ] ++ ; 
		ll cnt = 0 ; 
		for( int i = 0 ; i < n ; i ++ ){
			if ( mp[ k - a[ i ] ] ){
				if ( a[ i ] == k - a[ i ] ){
					cnt += mp[ a[ i ] ] * ( mp[ a[ i ] ] - 1 ) / 2 ; 
				}
				else cnt += mp[ k - a[ i ] ] * mp[ a[ i ] ];
				mp[ a[ i ] ] = 0 ; 
				mp[ k - a[ i ] ] = 0 ; 
			}
		}
		cout << cnt << endl;
	}
	
	return 0 ; 
}