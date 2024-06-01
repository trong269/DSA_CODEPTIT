#include<bits/stdc++.h>
using namespace std ; 
#define ll long long


int main(){
	int t ; cin >> t ; 
	while( t -- ){
		int n , m ; cin >> n >> m ; 
		int a[ n ] , b[ m ] ; 
		for( auto &x : a ) cin >> x ; 
		for( auto &x : b ) cin >> x ; 
		set<int> se( a , a + n ) ; 
		for( auto x : b )se.insert( x ) ; 
		for( auto x : se )cout << x << " " ; 
		cout << endl;
		int i = 0 , j = 0 ; 
		while( i < n && j < m ){
			if ( a[ i ] == b[ j ] ){
				cout << a[ i ] << " "; 
				i ++ ; j ++ ; 
			}
			else if ( a[ i ] > b[ j ] ){
				j ++ ; 
			}
			else i ++ ; 
		}
		cout << endl;
	}
	
	return 0 ; 
}