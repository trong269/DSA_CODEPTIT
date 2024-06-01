#include<bits/stdc++.h>
using namespace std ;
#define ll long long

string display( int x[ ], int n ) {
	string s = ""; 
	for( int i = 1 ; i <= n ; i ++ ) s += to_string( x[ i ] );
	return s ; 
}
bool check( int x[], int n ) {
	for( int i = 1 ; i <= n ; i ++ )if ( x[ i ] != n - i + 1 )return false ;
	return true ;
}
int main() {
	int t ;
	cin >> t ;
	while( t -- ) {
		int n ;
		cin >> n;
		int x[ n + 1 ] ;
		for( int i = 1 ; i <= n ; i ++ )x[ i ] = i ;
		vector<string> v ; 
		v.push_back(display( x, n ) );
		while( 1 ) {
			int i = n - 1 ;
			while ( x[ i ] > x[ i + 1 ] && i > 0 ) {
				i -- ;
			}
			if ( i > 0 ) {
				for( int j = n ; j > i ; j -- ) {
					if ( x[ j ] > x[ i ] ) {
						swap( x[ i ], x[ j ] );
						break ;
					}
				}
				int l = i + 1, r = n ;
				while( l < r ) {
					swap( x[ l ], x[ r ] );
					l ++ ;
					r -- ;
				}
				v.push_back(display( x, n ) );
			}
			if ( check( x, n ) )break ;
		}
		for( int i = v.size() -1 ; i >= 0 ; i -- ){
			cout <<  v[ i ] << " " ; 
		}
		cout << endl;
	}

	return 0 ;
}