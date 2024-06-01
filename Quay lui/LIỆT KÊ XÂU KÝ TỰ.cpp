#include<bits/stdc++.h>
using namespace std ; 
#define ll long long

char n ; 
int k ; 

char x[ 100 ] ; 

void display(){
	for( int i = 1 ; i <= k ; i ++ )cout << x[ i ] ; 
	cout << endl;
}

void back( int i ){
	for( char c = x[ i - 1 ] ; c <= n ; c ++ ){
		x[ i ] = c ; 
		if ( i == k ){
			display();
		}
		else back( i + 1 ) ; 
	}
}

int main(){
	cin >> n >> k ; 
	x[ 0 ] = 'A';
	back( 1 );
	return 0 ; 
}