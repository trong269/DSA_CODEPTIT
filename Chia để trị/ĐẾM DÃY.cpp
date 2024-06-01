#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 
ll mod = 123456789;

ll mu( ll a , ll b ){
	if ( b == 0 )return 1 ; 
	ll x = mu( a , b / 2 ); 
	if ( b % 2 ) return ( ( x % mod ) * ( x % mod ) ) % mod * ( a % mod ) % mod ; 
	return ( x % mod ) * ( x % mod ) % mod  ; 
}

int main(){
	int t ; cin >> t ; 
	while( t -- ){
		ll n ; cin >> n ; 
		cout << mu( 2 , n - 1 ) << endl ; 
		
	}	
	return 0 ; 
}