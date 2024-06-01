#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 
ll mod = 1e9 + 7 ; 

int main(){
	int t ; cin >> t ; 
	while( t-- ){
		int n , k ; cin >> n >> k ; 
		if ( n < k ){
			cout << 0 << endl;
			continue ; 
		}
		ll p = 1 ; 
		for( ll i = n ; i >= n - k + 1 ; i -- ){
			p = ( p % mod * i % mod ) % mod ; 
			p %= mod ; 
		}
		cout << p << endl;
	}
	
	return 0 ; 
}