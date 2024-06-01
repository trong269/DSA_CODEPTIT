#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
ll mod = 1e9 + 7 ;

int main(){
	int t ; cin >> t ; 
	while( t -- ){
		int n ; cin >> n ; 
		ll a[ n ]; 
		for( auto &x : a ) cin >> x ; 
		sort( a , a + n ); 
		ll sum = 0 ; 
		for( int i = 0 ; i < n; i ++ ){
			ll tmp = ( ( a[ i ] % mod ) * ( i % mod ) ) % mod ; 
			sum = ( ( sum % mod ) + ( tmp % mod ) ) % mod ; 
		}
		cout << sum << endl;
	}
	
	return 0 ; 
}