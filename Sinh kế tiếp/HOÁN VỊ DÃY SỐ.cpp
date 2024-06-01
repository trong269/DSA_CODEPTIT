#include<bits/stdc++.h>
using namespace std ;
#define ll long long

void display( int x[ ], int a[] , int n ) {
	for( int i = 1 ; i <= n ; i ++ ) cout << a[ x[ i ] ] << " " ;
	cout << "\n";
}
bool check( int x[], int n ) {
	for( int i = 1 ; i <= n ; i ++ )if ( x[ i ] != n - i + 1 )return false ;
	return true ;
}
int main() {
	int t ;
	t = 1 ;
	while( t -- ) {
		int n ;
		cin >> n;
		int a[ n + 1 ] ; 
		a[ 0 ] = -1000000; 
		for( int i = 1 ; i <= n ; i ++ )cin >> a[ i ] ; 
		sort( a , a + n + 1 ); 
		int x[ n + 1 ] ;
		for( int i = 1 ; i <= n ; i ++ )x[ i ] = i ;
		display( x, a , n ) ;
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
				display( x, a,n );
			}
			if ( check( x, n ) )break ;
		}
		cout << endl;
	}

	return 0 ;
}