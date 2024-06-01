#include<bits/stdc++.h>
using namespace std ; 
#define ll long long

int vtri_giam( int a[ ] , int n ){
	for( int i = 1 ; i < n ; i ++ ){
		if ( a[ i ] < a[ i - 1 ] ){
			return i ; 
		}
	}
	return 0 ; 
}

int main(){
	int t ; cin >> t  ; 
	while( t -- ){
		int n ; cin>> n ; 
		int a[ n ]; 
		for( auto &x : a )cin >> x ; 
		cout << vtri_giam( a , n ) << endl;
		
	}
	return 0 ; 
}