#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 


int a[ 1005 ], n ;
set<int> se ; 
 
 bool check( ){
 	if( se.size() != n )return false ; 
 	int i = 1;
 	for( auto x : se ){
 		if ( x != a[ i ] )return false ; 
 		i ++ ; 
	}
	return true ; 
 }
 
int main(){
	int t ; cin >> t; 
	while( t-- ){
		se.clear(); 
		cin >> n; 
		for( int i = 1 ; i <= n ; i ++ ){
			cin >> a[ i ]; 
			se.insert( a[ i ] ); 
		}
		if ( check( ) )cout << 1 << endl;
		else cout << 0 << endl;
	}
	
	return 0 ; 
}