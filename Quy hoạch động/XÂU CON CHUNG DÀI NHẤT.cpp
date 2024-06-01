#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 


int f[ 1005 ][ 1005 ]; 

int main(){
	int t ; cin >> t ; 
	while( t-- ){
		string s1 , s2 ; 
		cin >> s1 >> s2 ; 
		int n = s1.size(), m = s2.size();
		s1 = "0" + s1 ; s2 = "0" + s2 ; 
		for( int i = 1 ; i <= n ; i ++ )f[ i ][ 0 ] = 0 ; 
		for( int i = 1 ; i <= m ; i ++ )f[ 0 ][ i ] = 0 ; 
		
		for( int i = 1 ; i <= n ; i ++ ){
			for( int j = 1 ; j <= m ; j ++ ){
				if ( s1[ i ] == s2[ j ] ){
					f[ i ][ j ] = f[ i - 1 ][ j - 1 ] + 1 ; 
				}
				else {
					f[ i ][ j ] = max( f[ i ][ j - 1 ] , f[ i - 1 ][ j ] ) ; 
				}
			}
		}
		cout << f[ n ][ m ] << endl;
	}
	
	return 0 ; 
}