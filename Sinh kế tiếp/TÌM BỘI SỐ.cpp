#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
vector<string> v ; 

void add( int x[] , int n ){
	string s = "9" ; 
	for( int i = 1 ; i <= n ; i ++ ){
		if ( x[ i ] == 1 )s += "9"; 
		else s += "0";
	}
	v.push_back( s ) ; 
}

void sinh(){
	for ( int n = 1 ; n <= 17 ; n ++ ){
		int x[ n + 1 ] ; 
		for( int i = 0 ; i <= n ; i ++ )x[ i ] = 0 ; 
		add( x , n ) ; 
		while( 1 ){
			int i = n ; 
			while( x[ i ] == 1 and i > 0 ){
				x[ i ] = 1 - x[ i ] ; 
				i -- ; 
			}
			if ( i > 0 ) {
				x[ i ] = 1 - x[ i ] ;
				add( x , n ) ; 
			}
			else break ;  
		}
	}
}


int main(){
	sinh(); 	
	int t ; cin >> t ; 
	while( t -- ){
		int n ; cin >> n ; 
		for( auto x : v ){
			if ( stoll ( x ) % n == 0 ){
				cout << x << endl;
				break ; 
			}
		}
	}
	
	return 0 ; 
}