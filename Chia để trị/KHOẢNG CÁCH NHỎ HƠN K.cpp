#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
ll mod = 1e9 + 7;


int main(){
	int t ; cin >> t ; 
	while( t -- ){
		int n , k ; cin >> n >>  k ; 
		int a[ n ] ; 
		for( auto &x : a ) cin >> x ; 
		sort( a , a + n ) ; 
		ll cnt = 0 ; 
		int l = 0 ; 
		for( int r = 1 ; r < n ; r ++ ){
			while( a[ r ] - a[ l ] >= k )l ++ ; 
			cnt += r - l ; 
		}
		cout << cnt << endl;
	}
	
	return 0 ; 
}