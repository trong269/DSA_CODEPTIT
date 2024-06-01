#include<bits/stdc++.h>
using namespace std ; 
#define ll long long


int main(){
	int t ; cin >> t; 
	while( t -- ){
		int n , m ; cin >> n >> m ; 
		ll a[ n ] , b[ m ]; 
		for( auto &x : a ) cin >> x ;
		for( auto &x : b ) cin >> x ; 
		 
		sort( a , a + n ) ; 
		sort( b , b + m ) ; 
		int i = 0 , j = 0 ; 
		while( i < n and j < m ){
			if ( a[ i ] <= b[ j ] ){
				cout << a[ i ] << " " ;
				i ++ ; 
			}
			else{
				cout << b[ j ] << " " ; 
				j ++ ; 
			}
		}
		while( i < n ) {
			cout << a[ i ] << " " ; 
			i ++ ; 
		}
		while( j < m ){
			cout << b[ j ] << " " ; 
			j ++ ; 
		}
		cout << endl;
	}
	return 0 ; 
}