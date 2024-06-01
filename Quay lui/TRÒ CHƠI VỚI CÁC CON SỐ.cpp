#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
int n ;
int x[ 100 ] ; 
bool used[ 100 ]; 
bool ok ; 

void display(){ 
	for( int i = 1 ; i <= n; i ++ )cout << x[ i ] ; 
	cout << endl;
}

void init(){
	ok = false ; 
	x[ 0 ] = -1;
	for( auto &x : used ) x = false ; 
}

void back( int i ){
	for( int j = 1 ; j <= n ; j ++ ){
		if ( !used[ j ] && abs( j - x[ i - 1 ] ) != 1 ){
			x[ i ] = j ; 
			used[ j ] = true ; 
			if ( i == n ){
				display();
			}
			else back( i + 1 );
			used[ j ] = false ; 
		}
	}
}

int main(){
	int t ; cin >> t ; 
	while( t -- ){
		cin >> n ; 
		init();
		back( 1 ) ; 
		if( !ok )cout << endl;
	}
	return 0 ; 
}