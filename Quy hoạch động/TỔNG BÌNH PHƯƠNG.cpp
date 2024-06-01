#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
int f[ 10005 ];
void init( ){
	f[ 1 ] = 1 ; f[ 2 ] = 2 ; f[ 3 ] = 3 ; 
	for( int i = 4 ; i <= 10000 ; i ++ ){
		f[ i ] = i ; 
		for( int j = 1 ;j <= sqrt( i ) ; j ++ ){
			f[ i ] = min( f[ i - j * j ] + 1 , f[ i ] );
		}
	}
		
}

int main(){
	init();
	int t ; cin >> t; 
	while( t-- ){
		int n; cin >> n ; 
		cout << f[ n ] << endl; 
	}
	
	return 0 ; 
}