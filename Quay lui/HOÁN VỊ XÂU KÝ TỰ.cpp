#include<bits/stdc++.h>
using namespace std ; 
bool used[ 100 ] = {false} ; 
int x[ 100 ] ; 
int n;
string s ;

void display( ){
	for( int i = 1 ; i <= n ; i ++ )cout << s[ x[ i ] - 1 ]; 
	cout << " "; 
}

void back( int i ){
	for( int j = 1 ; j <= n ; j ++ ){
		if ( !used[ j ] ){
			x[ i ] = j ; 
			used[ j ] = true ; 
			if ( i == n ){
				display( ); 
			}
			else back( i + 1 ) ; 
			used[ j ] = false ; 
		}
	}
}

int main(){
	int t ; cin >> t ; 
	while( t -- ){
		cin >> s ; 
		n = s.size() ; 
		back( 1 ); 
		for( auto &x : used ) x = false ; 
		cout << endl;
	}
	
	return 0 ; 
}