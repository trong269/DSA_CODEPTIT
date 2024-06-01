#include<bits/stdc++.h>
using namespace std ;
#define ll long long

void display( int x[] , int n ){
	for( int i = 1 ; i <= n ; i ++ ){
		cout << x[ i ]; 
	}
	cout << "\n" ; 
}
bool check1( int x[] , int n ){
	for( int i = 1 ; i <= n ; i ++ )if ( x[ i ] != 1 )return false ; 
	return true ; 
}
bool check2( int x[] , int n , int k ){
	int cnt = 0 ; 
	for( int i = 1 ; i <= n ; i ++ )cnt += x[ i ] ; 
	return cnt == k ; 
}
int main(){
	int t ; cin >> t ; 
	while( t -- ){
		int n , k; cin >> n >> k ; 
		int x[ n + 1 ]; 
		for( int i = 1 ; i <= n ; i ++ )x[ i ] = 0 ; 
		if ( check2( x , n , k ) )display( x , n ) ; 
		while( 1 ){
			int i = n ; 
			while( x[ i ] == 1 && i > 0 ){
				x[ i ] = 1 - x[ i ] ; 
				i -- ; 
			}
			if ( i > 0 ){
				x[ i ] = 1 - x[ i ] ; 
			}
			if ( check2( x , n , k ) )display( x , n ) ; 
			if ( check1( x , n ) )break ; 
		}
	}
	
	return 0 ; 
}