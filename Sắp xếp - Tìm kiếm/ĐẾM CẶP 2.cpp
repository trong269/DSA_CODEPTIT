#include<bits/stdc++.h>
using namespace std ; 
#define ll long long


int main(){
	int t ; cin >> t  ; 
	while( t -- ){
		int n ,k  ; cin >> n >> k ; 
		int a[ n ]; 
		for( auto &x : a )cin >> x ; 
		sort( a , a + n ); 
		int l = 0 ; 
		ll dem = 0 ; 
		for( int r = 1 ; r < n; r ++ ){
			while( a[ r ] - a[ l ] >= k ) l ++ ; 
			dem += r - l ; 
		}		
		cout << dem << endl;
	}
	return 0 ; 
}