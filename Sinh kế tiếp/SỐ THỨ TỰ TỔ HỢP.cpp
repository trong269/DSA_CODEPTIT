#include<bits/stdc++.h>
using namespace std ; 
#define ll long long

bool cmp ( int x[] , int y[ ] , int k ){
	for( int i = 1 ; i <= k ; i ++ )if ( x[ i ] != y[ i ] )return false ; 
	return true ; 
}
bool check( int x[] , int n , int k ){
	for( int i = 1 ; i <= k ; i ++ )if ( x[ i ] != n - k + i )return false ; 
	return true ; 
}
int main(){
	int t ; cin >> t ; 
	while( t -- ){
		int n , k ; cin >> n >> k ; 
		int y[ k + 1 ] ; 
		for( int i = 1 ; i <= k ; i ++ ) cin >> y[ i ] ; 
		int x[ k + 1 ] ;
		for( int i = 1 ; i <= k ; i ++ )x[ i ] = i ; 
		int cnt = 1 ; 
		if ( cmp ( x , y , k) ){
			cout << cnt << endl; 
			continue ; 
		} 
		while( 1 ){
			cnt ++ ; 
			int i = k ; 
			while( x[ i ] == n - k + i && i > 0 )i -- ; 
			x[ i ] += 1 ; 
			for( int j = i + 1 ; j <= k ; j ++ )x[ j ] = x[ i ] + j - i ; 
			if ( cmp ( x , y , k ) ){
				cout << cnt << endl;
				break ; 
			}
			if ( check( x , n , k ) )break ; 
		}
	}
	
	return 0 ; 
}