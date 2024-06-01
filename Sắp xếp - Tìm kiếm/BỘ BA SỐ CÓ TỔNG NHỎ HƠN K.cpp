#include<bits/stdc++.h>
using namespace std ; 
#define ll long long


int main(){
	int t ; cin >> t ; 
	while( t -- ){
		ll n , k ; cin >> n >> k ; 
		ll a[ n ]; 
		for( auto &x : a )cin >> x ; 
		sort( a , a + n ); 
		ll cnt = 0 ; 
		for( int i = 0 ; i < n; i ++ ){
			for( int j = i + 1 ; j < n; j ++ ){
				int it =  lower_bound( a + j + 1, a + n , k - a[ i ] - a[ j ] )  - a ;
				cnt += it - j - 1 ;
			}
		}
		
		cout << cnt << endl;
	}
	
	return 0 ; 
}