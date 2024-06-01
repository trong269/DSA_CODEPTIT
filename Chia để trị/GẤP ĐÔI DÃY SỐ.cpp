#include<bits/stdc++.h>
using namespace std ; 
#define ll long long

ll cnt[ 100 ] = {0} ; 
void init ( ){
	cnt[ 1 ] = 1 ; 
	for( int i = 2 ; i <= 50 ; i ++ )cnt[ i ] = cnt [ i - 1 ] * 2 + 1 ; 
}

int find( ll n , ll k ){
	if ( k == cnt[ n ] / 2 )return n ;
	if ( k > cnt[ n ] / 2 )return find( n - 1 , k - cnt[ n ] / 2  - 1 ); 
	return find ( n - 1 , k ); 
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