#include<bits/stdc++.h>
using namespace std ;
#define ll long long

string c = "AB";
void display( int x[] , int n ){
	for( int i = 1 ; i <= n ; i ++ ){
		if ( x[ i ] == 0 )cout << 'A'; 
		else cout << 'B';
	}
	cout << " " ; 
}
bool check( int x[] , int n ){
	for( int i = 1 ; i <= n ; i ++ )if ( x[ i ] != 1 )return false ; 
	return true ; 
}
int main(){
	int t ; cin >> t ; 
	while( t -- ){
		int n ; cin >> n ; 
		int x[ n + 1 ]; 
		for( int i = 1 ; i <= n ; i ++ )x[ i ] = 0 ; 
		display( x , n ); 
		while( 1 ){
			int i = n ; 
			while( x[ i ] == 1 && i > 0 ){
				x[ i ] = 1 - x[ i ] ; 
				i -- ; 
			}
			if ( i > 0 ){
				x[ i ] = 1 - x[ i ] ; 
			}
			display( x , n ) ; 
			if ( check( x , n ) )break ; 
		}
		cout << endl;
	}
	
	return 0 ; 
}