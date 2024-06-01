#include<bits/stdc++.h>
using namespace std ; 
#define ll long long

bool check( ll a[] , ll n , ll k ){
	int l = 0 ;
	ll sum = 0 ; 
	for( int r = 0 ; r < n ; r ++ ){
		sum += a[ r ] ; 
		while( sum > k && l < r ){
			sum -= a[ l ] ; 
			l ++ ; 
		}
		if ( sum == k )return true ; 
	}
	return false ; 
}

int main(){
	int t ; cin >> t ; 
	while( t-- ){
		ll n , k ; cin >> n >> k ; 
		ll a[ n ] ; 
		for( auto &x : a ) cin >> x ; 
		if ( check( a , n , k ) )cout << "YES\n";
		else cout << "NO\n";
	}
	return 0 ; 
}