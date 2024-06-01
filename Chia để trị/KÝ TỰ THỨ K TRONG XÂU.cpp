#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 

ll fn[ 100 ] ; 
void init( ){
	fn[ 1 ] = 1 ; 
	for( int i = 2 ; i <= 25 ; i ++ )fn[ i ] = fn[ i - 1 ] * 2 + 1; 
}

char find ( ll n , ll k ){
	if ( k == fn[ n ] / 2 )return n + 'A' - 1 ;
	if ( k < fn[ n ] / 2 )return find ( n - 1 , k ); 
	return find ( n - 1 , k - fn[ n - 1 ] - 1  ) ;
}

int main(){
	init(); 
	int t ; cin >> t ; 
	while( t -- ){
		ll n , k ; cin >> n >> k ; 
		cout << find ( n , k - 1 ) << endl;
	}
	
	return 0 ; 
}