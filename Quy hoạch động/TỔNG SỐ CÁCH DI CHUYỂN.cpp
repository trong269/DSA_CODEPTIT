#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 
int mod = 1e9 + 7; 

int f[ 100005 ];
int main(){
	f[ 0 ] = 1 ; 
	int t ; cin >> t ; 
	while( t -- ){ 
		int n , k; cin >> n >> k ; 
		for( int i = 1 ; i <= n ; i ++ ){
			f[ i ] = 0 ; 
			for( int j = 1 ; j <= k ; j ++ ){
				if ( i - j >= 0 ){
					f[ i ] = ( f[ i ] % mod + f[ i - j ] % mod ) % mod ;
				} 
			}
		}
		cout << f[ n ] << endl;
	}
	
	return 0 ; 
}