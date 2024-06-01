#include<bits/stdc++.h>
using namespace std ; 
#define ll long long


int main(){
	int t ; cin >> t ; 
	while( t -- ){
		int n ; cin>> n ; 
		int a[ n ]; 
		for( auto &x : a )cin >> x ; 
		int f[ n ] ; 
		f[ 0 ] = a[ 0 ] ; 
		for( int i = 1 ; i < n ;i ++ )f[ i ] = f[ i - 1 ] + a[ i ] ; 
		bool ok = false ; 
		for( int i = 0 ; i < n ; i ++ ){
			if ( f[ i ] - a[ i ] == f[ n - 1 ] - f[ i ] ) {
				cout << i + 1 << endl;
				ok = true ; 
				break ; 
			}
		}
		if ( !ok )cout << "-1\n"; 
	}
	return 0 ; 
}