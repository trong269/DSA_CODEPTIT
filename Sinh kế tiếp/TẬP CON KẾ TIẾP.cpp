#include<bits/stdc++.h>
using namespace std ; 
#define ll long long

bool check( int x[ ] , int n , int k ){
	for( int i = 1 ; i <= k ; i ++ )if ( x[ i ] != n - k + i )return false ; 
	return true ; 
}

int main(){
	int t ; cin >> t ; 
	while( t -- ){
		int n , k ; cin >> n >> k ; 
		int x [ k + 1 ]; 
		for( int i = 1 ; i <= k ; i ++ ) cin >> x[ i ] ; 
		bool ok = check( x , n ,k ); 
		int i = k ; 
		while( x[ i ] == n - k + i && i > 0 ){
			i -- ; 
		}
		if ( i > 0 ){
			x[ i ] ++ ; 
			for( int j = i + 1 ; j <= k ; j ++ ){
				x[ j ] = x[ i ] + j - i ; 
			}
		}
		if ( !ok ){
			for ( int j = 1 ; j <= k ; j ++ ) cout << x[ j ] << " " ;
		}
		else {
			for( int j = 1 ; j <= k ; j ++ ) cout << j << " " ; 
		}
		cout << endl;
	}
	
	return 0 ; 
}