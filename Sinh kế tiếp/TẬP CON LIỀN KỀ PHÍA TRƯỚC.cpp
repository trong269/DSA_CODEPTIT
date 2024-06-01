#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
ll mod = 1e9 + 7;

bool check( int x[] , int k ){
	for( int i = 1 ; i <= k ; i ++ ){
		if ( x[ i ] != i )return false ; 
	}
	return true ; 
}

int main(){
	int t ; cin >> t ; 
	while( t -- ){
		int n , k ; cin >> n >> k ; 
		int x [ k + 1 ] ; 
		x[ 0 ] = -1e9 ; 
		for( int i = 1 ; i <= k ; i ++ )cin >> x[ i ] ; 
		if ( check( x , k ) ){
			for( int i = 1 ; i <= k ; i ++ )cout << n - k + i << " " ; 
			cout << endl; 
		}
		else {
			int i = k ; 
			while( x[ i ] - x[ i - 1 ] == 1 and i > 1 )i -- ; 
			x[ i ] -= 1 ; 
			for( int j = k ; j > i ; j -- ){
				x[ j ] = n - k + j ; 
			}
			for( int j = 1 ; j <= k ; j ++ )cout << x[ j ] << " " ; 
			cout << endl
			;
		}
	}
	
	return 0 ; 
}