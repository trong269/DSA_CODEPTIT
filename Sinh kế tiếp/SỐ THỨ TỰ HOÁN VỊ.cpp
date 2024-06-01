#include<bits/stdc++.h>
using namespace std ;
#define ll long long

bool cmp ( int x[] , int y[] , int n ){
	for( int i = 1 ;i <= n; i ++ )if ( x[ i ] != y[ i ] )return false ; 
	return true ; 
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
		int y[ n + 1 ] ; 
		for( int i = 1 ; i <= n ; i ++ )cin >> y[ i ] ; 
		int x[ n + 1 ] ;
		for( int i = 1 ; i <= n ; i ++ )x[ i ] = i ;
		int cnt = 1 ; 
		if ( cmp ( x , y , n) ){
			cout << cnt << endl; 
			continue ; 
		}
		while( 1 ) {
			cnt ++ ; 
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
				if ( cmp ( x , y , n ) ){
					cout << cnt << endl;
					break ; 
				}
			}
			if ( check( x, n ) )break ;
		}
	}

	return 0 ;
}