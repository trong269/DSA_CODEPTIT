#include<bits/stdc++.h>
using namespace std ; 
#define ll long long


int main(){
	int t ; cin >> t ; 
	while( t -- ){
		int n , m , k ; cin >> n >> m >> k ; 
		int a[ n ] , b[ m ] , c[ k ]; 
		for( auto &x : a )  cin >> x ; 
		for( auto &x : b )  cin >> x ; 
		for( auto &x : c )  cin >> x ; 
		vector<int> giao12 , giao123 ; 
		int i = 0 , j = 0 ; 
		while( i < n && j < m ){
			if ( a[ i ] == b[ j ] ){
				giao12.push_back( a[ i ] ); 
				i ++ ; j ++ ; 
			}
			else if ( a[ i ] > b[ j ] ){
				j ++ ; 
			}
			else i ++ ; 
		}
		i = 0 ;j = 0 ; 
		while( i < giao12.size() && j < k ){
			if ( giao12[ i ] == c[ j ] ){
				giao123.push_back( c[ j ] );
				i ++ ; j ++ ; 
			} 
			else if ( giao12[ i ] > c[ j ] ){
				j ++ ; 
			}
			else i ++ ;
		}
		for( auto x : giao123 ) cout << x << " " ; 
		if ( giao123.size() == 0 )cout << -1 ; 
		cout << endl;
	}
	
	return 0 ; 
}