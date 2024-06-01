#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 
ll mod = 1e9 + 7;

int main(){
	int t ; cin >> t; 
	while( t-- ){
		ll n ; cin >> n; 
		ll a[ n ]; 
		for( auto &x : a ) cin >> x; 
		priority_queue<ll, vector<ll>, greater<ll>> pq; 
		for( auto x : a ) pq.push( x );
		ll sum = 0;
		while( pq.size() > 1 ){
			ll tmp1 = pq.top(); pq.pop();
			ll tmp2 = pq.top(); pq.pop();
			ll tmp = ( tmp1 % mod + tmp2 % mod ) % mod ;
			sum = ( sum % mod + tmp % mod ); 
			sum %= mod ; 
			pq.push( tmp );
		}
		cout << sum << endl;
	}
	
	return 0 ; 
}