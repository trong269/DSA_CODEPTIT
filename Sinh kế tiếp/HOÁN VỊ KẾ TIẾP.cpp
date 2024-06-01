#include<bits/stdc++.h>
using namespace std ; 
#define ll long long

bool check( int x[ ] , int n ){
	for( int i = 1 ; i <= n ; i ++ )if ( x[ i ] != n - i + 1 )return false ; 
	return true ; 
}

int main(){
	int t ; cin >> t ; 
	while( t -- ){
		int n ; cin >> n ; 
		int x [ n + 1 ] ; 
		for( int i = 1 ; i <= n ; i ++ ) cin >> x[ i ] ; 
		bool ok = check( x , n ) ; 
		int i = n - 1 ; 
		while( x[ i ] > x[ i + 1 ] && i > 0 ){
			i -- ; 
		}
		if( i > 0 ){
			for( int j = n ; j > i ; j -- ){
				if ( x[ j ] > x[ i ] ){
					swap( x[ i ] , x[ j ] ) ; 
					break ; 
				}
			}
			int l = i + 1 , r = n ; 
			while( l < r ){
				swap( x[ l ] , x[ r ] ) ; 
				l ++ ; 
				r -- ; 
			}	
		}
		if ( !ok ){
			for ( int j = 1 ; j <= n ; j ++ )cout << x[ j ] << " " ; 
		}
		else {
			for ( int j = 1 ; j <= n ; j ++ )cout << j << " " ; 
		}
		cout << endl;
	}
	
	return 0 ; 
}