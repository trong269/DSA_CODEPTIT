#include<bits/stdc++.h>
using namespace std ; 
#define ll long long

ll floor( ll a[ ] , int n , ll x ){
	int l = 0 , r = n - 1 ; 
	ll res = -1 ; 
	while( l <= r ){
		int mid = ( l + r ) / 2 ; 
		if ( a[ mid ] <= x ){
			res = mid + 1; 
			l = mid + 1 ; 
		}
		else {
			r = mid - 1 ; 
		}
	}
	return res ; 
}

int main(){
	int t ; cin >> t; 
	while( t -- ){
		int n , x ; cin >> n >> x ; 
		ll a[ n ]; 
		for( auto &x : a )cin >> x; 
		cout << floor( a , n , x ) << endl;
	}
	
	return 0 ; 
}