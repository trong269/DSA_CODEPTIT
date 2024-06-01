#include<bits/stdc++.h>
using namespace std;
#define ll long long
int f[ 100 ][ 100 ] = {0};
int main(){
	int t ; cin >> t ; 
	while( t-- ){
		string s ; cin >> s; 
		int n = s.size(); 
		s = "@" + s ; 
		for( int i = 1 ; i <= n ; i ++ )f[ i ][ i ] = 1 ; 
		for( int i = n ; i > 0 ; i -- ){
			for( int j = i + 1 ; j <= n ; j ++ ){
				if ( s[ i ] == s[ j ] )f[ i ][ j ] = f[ i + 1 ][ j - 1 ] + 2 ; 
				else f[ i ][ j ] = max( f[ i + 1 ][ j ] , f[ i ][ j - 1 ] );
			}
		}
		cout << n - f[ 1 ][ n ] << endl;
	}
	return 0 ; 
}