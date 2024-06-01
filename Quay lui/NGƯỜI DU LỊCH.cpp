#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
int n , a[ 100 ][ 100 ]; 
bool used[ 100 ]; 
int minx = 1e9 ; 
int x[ 100 ]; 
void back( int i , int cost ){
	for( int j = 2 ; j <= n ; j ++ ){
		if ( used[ j ] == false ){
			x[ i ] = j ; 
			cost += a[ x[ i - 1 ] ][ x[ i ] ] ; 
			used[ j ] = true ; 
			if( i == n ){
				minx = min( minx , cost + a[ x[ i ] ][ 1 ] );
			}
			else if ( cost < minx ) back( i + 1 , cost ); 
			used[ j ] = false ; 
			cost -= a[ x[ i - 1 ] ][ x[ i ] ]; 
		}
	}
}

int main(){
	cin >> n ; 
	for( int i = 1 ; i <= n ; i ++ ){
		for( int j = 1 ; j <= n ; j ++ )cin >> a[ i ][ j ]; 
	}
	x[ 1 ] = 1 ; 
	back( 2 , 0 ); 
	cout << minx ; 
	return 0 ; 
}