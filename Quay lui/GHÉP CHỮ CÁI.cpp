#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
int n , x[ 100 ];
bool used[ 100 ] ;  

void in(){
	for( int i = 1 ; i <= n ; i ++ ){
		cout << char( 'A' + x[ i ] - 1 ); 
	}
	cout << endl;
}
bool check( ){
	for( int i = 1 ; i <= n ; i ++ ){
		if ( ( i != 1 and i != n ) and ( x[ i ] == 1 or x[ i ] == 5 ) ){
			if( ( x[ i - 1 ] != 1 and x[ i - 1 ] != 5 ) and ( x[ i + 1 ] != 1 and x[ i + 1 ] != 5 ) )return false ;  
		}
	}
	return true ; 
}
void back( int i ){
	for( int j = 1 ; j <= n ; j ++ ){
		if ( !used[ j ] ){
			x[ i ] = j ; 
			used[ j ] = true ; 
			if ( i == n ){
				if ( check( ) )in();
			}
			else back( i + 1 ); 
			used[ j ] = false ; 
		}
	}
}

int main(){
	char c ; cin >> c ; 
	n = c - 'A' + 1 ;
	back( 1 ); 
	return 0 ; 
}