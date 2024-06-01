#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
ll mod = 1e9 + 7;

ll mu( ll a , ll b ){
	if ( b == 0 )return 1 ; 
	ll x = mu( a , b / 2 ); 
	if ( b % 2 == 0 )return ( x % mod * x % mod ) % mod  ; 
	return( (( x % mod * x % mod ) % mod)  * ( a % mod) ) % mod  ; 
}

int main(){
	while( 1 ){
		ll a , b ; cin >> a >> b ; 
		if ( a == 0 and b == 0 )break ; 
		cout << mu( a , b ) << endl;
	}
	
	return 0 ; 
}