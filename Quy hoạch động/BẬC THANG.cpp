#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 
int mod = 1e9 + 7; 
int f[ 100005 ] ; 
int main(){
	int t ; cin >> t ; 
	while( t -- ){
		int n , k ; cin >> n >> k ; 
		f[ 1 ] = 1 ; 
		for( int i = 2 ; i <= n ; i ++ ){
			f[ i ] = 0 ; 
			if( i - k <= 0 ){
				for( int j = 1 ; j < i ; j ++ )f[ i ] = ( f[ i ] % mod + f[ j ] % mod ) % mod ;
				f[ i ] += 1 ;  
			}
			else {
				for( int j = i - k ; j < i ; j ++ )f[ i ] = ( f[ i ] % mod + f[ j ] % mod ) % mod ; 
			}
		}
		cout << f[ n ] << endl;
	}
	
	return 0 ; 
}