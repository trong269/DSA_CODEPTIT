#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
int n , a[ 100 ][ 100 ];
bool used[ 100 ] ; 
int x[ 100 ];
int minx = 1e9 ; 
void back( int i , int sum ){
	for( int j = 1; j <= n ; j ++ ){
		if( !used[ j ] ){
			x[ i ] = j ; 
			used[ j ] = true ; 
			if ( i == n ){
				minx = min( minx , sum + a[ x [ i - 1 ] ][ x[ i ] ] );
			}
			else if ( sum + a[ x[ i - 1 ] ][ x[ i ] ]  < minx ) back( i + 1 , sum + a[ x[ i - 1 ] ][ x[ i ] ] );
			used[ j ] = false ; 
		}
	}
}
void init(){
	for( auto &x : used )x = false ; 
	minx = 1e9 ; 
}
int main(){
	int t ; cin >> t; 
	while( t-- ){
		init();
		cin >> n;
		for( int i = 1; i <= n; i ++ ){
			for( int j = 1 ; j <= n ;j ++ )
				cin >> a[ i ][ j ];
		}
		back( 1 , 0 );
		cout << minx << endl;
	}
	return 0 ; 
}