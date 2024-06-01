#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 

ll fn[ 100 ] ; 
void init( ){
	fn[ 1 ] = fn[ 2 ] = 1 ; 
	for( int i = 3 ; i <= 92 ; i ++ )fn[ i ] = fn[ i - 2 ] + fn[ i - 1 ] ; 
}

char find ( ll n , ll k ){
	if ( n == 1 )return '0';
	if ( n == 2 )return '1';
	if ( k <= fn[ n - 2 ] )return find ( n - 2 , k ); 
	return find ( n - 1 , k - fn[ n - 2 ] ) ;
}

int main(){
	init(); 
	int t ; cin >> t ; 
	while( t -- ){
		ll n , k ; cin >> n >> k ; 
		cout << find ( n , k ) << endl;
	}
	
	return 0 ; 
}