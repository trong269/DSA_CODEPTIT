#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 
int mod = 1e9 + 7; 

ll f[ 1000005 ];
ll a[ 1000005 ];
int main(){
	int t ; cin >> t; 
	while( t -- ){
		int n ; cin >> n;  
		for( int i = 1 ; i <= n ; i ++ )cin >> a[ i ]; 
		f[ 1 ] = a[ 1 ]; 
		f[ 2 ] = a[ 2 ];
		for( int i = 3 ; i <= n ; i ++ ){
			if ( i - 2 == 2 ){
				f[ i ] = max( {f[ i - 1 ] , a[ i ] + f[ i - 2 ] , a[ i ] + f[ i - 3 ] } );
			}
			else {
				f[ i ] = max( f[ i - 1 ] , a[ i ] + f[ i - 2 ] ) ; 
			}
		}
		cout << f[ n ] << endl;
	}
	
	return 0 ; 
}