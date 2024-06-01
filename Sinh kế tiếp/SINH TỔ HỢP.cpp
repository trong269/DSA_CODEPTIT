#include<bits/stdc++.h>
using namespace std ; 
#define ll long long

void display( int x[ ] , int k ){
	for( int i = 1 ; i <= k ; i ++ ) cout << x[ i ] ; 
	cout << " ";
}
bool check( int x[] , int n , int k ){
	for( int i = 1 ; i <= k ; i ++ )if ( x[ i ] != n - k + i )return false ; 
	return true ; 
}
int main(){
	int t ; cin >> t ; 
	while( t -- ){
		int n , k ; cin >> n >> k ; 
		int x[ k + 1 ] ;
		for( int i = 1 ; i <= k ; i ++ )x[ i ] = i ; 
		display( x , k ) ; 
		while( 1 ){
			int i = k ; 
			while( x[ i ] == n - k + i && i > 0 )i -- ; 
			x[ i ] += 1 ; 
			for( int j = i + 1 ; j <= k ; j ++ )x[ j ] = x[ i ] + j - i ; 
			display(x , k );
			if ( check( x , n , k ) )break ; 
		}
		cout << endl;
	}
	
	return 0 ; 
}