#include<bits/stdc++.h>
using namespace std ;
#define ll long long
void display( int x[] , int n ){
	for( int i = 1 ; i <= n ; i ++ ){
		if ( x[ i ] == 0 )cout << 6 ; 
		else cout << 8 ; 
	}
	cout << "\n" ; 
}
bool check1( int x[] , int n ){
	for( int i = 1 ; i <= n ; i ++ )if ( x[ i ] != 1 )return false ; 
	return true ; 
}
bool check2( int x[] , int n ){
	 for( int i = 1 ; i < n ; i ++ ){
	 	if ( x[ i ] == 1 && x[ i + 1 ] == 1 )return false ; 
	 }
	 for( int i = 1 ; i < n - 2 ; i ++ ){
	 	if ( x[ i ] == 0 && x[ i + 1 ] == 0 && x[ i + 2 ] == 0 && x[ i + 3 ] == 0 )return false ; 
	 }
	 return x[ 1 ] == 1 && x[ n ] == 0 ; 
}
int main(){
	int t ; t = 1  ; 
	while( t -- ){
		int n ; cin >> n ; 
		int x[ n + 1 ]; 
		for( int i = 1 ; i <= n ; i ++ )x[ i ] = 0 ; 
		if ( check2( x , n) )display( x , n ) ; 
		while( 1 ){
			int i = n ; 
			while( x[ i ] == 1 && i > 0 ){
				x[ i ] = 1 - x[ i ] ; 
				i -- ; 
			}
			if ( i > 0 ){
				x[ i ] = 1 - x[ i ] ; 
			}
			if ( check2( x , n ) )display( x , n ) ; 
			if ( check1( x , n ) )break ; 
		}
	}
	
	return 0 ; 
}