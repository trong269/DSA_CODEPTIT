#include<bits/stdc++.h>
using namespace std ; 
#define ll long long

bool scp ( ll n ){
	ll tmp = sqrt( n ) ; 
	return tmp * tmp == n ; 
}

bool check( ll a[ ] , int n ){
	map<ll ,ll > mp ; 
	for( int i = 0 ; i < n ; i ++ )mp[ a[ i ] ] = 1 ; 
	for( int i = 0 ; i < n;i ++ ){
		for( int j = i + 1 ; j < n ; j ++ ){
			if ( scp( a[ i ]*a[ i ] + a[ j ]*a[ j ] ) and mp[ (int )sqrt( a[ i ]*a[ i ] + a[ j ]*a[ j ] ) ] ){
				return true ; 
			}
		}
	}
	return false ; 
}

int main(){
	int t ; cin >> t  ; 
	while( t -- ){
		int n ; cin>> n ; 
		ll a[ n ]; 
		for( auto &x : a )cin >> x ; 
		if ( check( a , n ) )cout << "YES\n"; 
		else cout << "NO\n"; 
		
	}
	return 0 ; 
}