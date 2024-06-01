#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 
int mod = 1e9 + 7; 

int f[ 1005][ 1005]; 

int main(){
	int t ; cin >> t ; 
	while( t-- ){
		string s1 , s2 ; cin >> s1 >> s2 ; 
		int n = s1.size(); 
		int m = s2.size();
		s1 = "@" + s1 ; 
		s2 = "@" + s2 ; 
		for( int i = 0 ; i <= m ; i ++ )f[ 0 ][ i ] = 0 ; 
		for( int i = 0 ; i <= n; i ++ )f[ i ][ 0 ] = 0 ; 
		for( int i = 1 ; i <= n ; i ++ ){
			for( int j = 1 ; j <= m ;j ++ ){
				if ( s1[ i ] == s2[ j ] ){
					f[ i ][ j ] = f[ i - 1 ][ j - 1 ] + 1 ; 
				}
				else f[ i ][ j ] = max( f[ i - 1 ][ j ] , f[ i ][ j - 1 ] ); 
			}
		}
		cout << f[ n ][ m ] << endl;
	}
	
	return 0 ; 
}