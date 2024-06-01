#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 
ll mod = 1e9 + 7;

ll mu( ll a , ll b ){
	if( b == 0 )return 1 ; 
	ll x = mu( a , b / 2 ); 
	if ( b % 2 == 1 )return x % mod * x % mod % mod * a % mod ;
	return x % mod * x % mod % mod ;
}

int main(){
	int t ; cin >> t ; 
	while( t -- ){
		ll n ; cin >> n ; 
		ll r = 0 ; 
	    ll m = n ; 
	    while( m ){
	        r = r * 10 + ( m % 10 ) ;
	        m /= 10 ; 
	    }
	    cout << mu( n , r ) << endl;
	    
	}
	
	return 0 ; 
}