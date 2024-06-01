#include<bits/stdc++.h>
using namespace std ;
#define ll long long
string c = "AH";
void display( int x[] , int n ){
	for( int i = 1 ; i <= n ; i ++ ){
		cout << c[ x[ i ] ]; 
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
	 return x[ n ] == 0 && x[ 1 ] == 1; 
}
int main(){
	int t ; cin >> t ; 
	while( t -- ){
		int n ; cin >> n  ; 
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