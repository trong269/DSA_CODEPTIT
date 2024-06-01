#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
ll mod = 1e9 + 7 ;

int main(){
	int t ; cin >> t ; 
	while( t -- ){
		int n , k ; cin >> n >> k; 
		int a[ n ]; 
		for( auto &x : a ) cin >> x ; 
		sort( a , a + n ); 
		if ( k > n - k ) k = n - k ; 
		ll sum = 0 ; 
		for( int i = 0 ; i < n; i ++ ){
			if( i < k ){
				sum -= a[ i ]; 
			}
			else sum += a[ i ]; 
		}
		cout << sum << endl;			
	}
	
	return 0 ; 
}