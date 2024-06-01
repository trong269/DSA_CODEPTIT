#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 
int f[ 105 ][ 105 ];
// quy ve bai toan xau con doi xung dai nhat (cac phan tu khong can lien liep)
int main(){
	int t ; cin >> t; 
	while( t-- ){
		string s ; cin >> s ; 
		int n = s.size() ; 
		s = "@" + s ; 
		// bai toan co so
		for( int i = 1 ; i <= n ; i ++ )f[ i ][ i ] = 1 ; 
		// tim f[i][j]
		for( int i = n ; i > 0 ; i -- ){
			for( int j = i + 1 ; j <= n ; j ++ ){
				if( s[ i ] == s[ j ] )f[ i ][ j ] = f[ i + 1 ][ j - 1 ] + 2 ; 
				else f[ i ][ j ] = max( f[ i ][ j - 1 ] , f[ i + 1 ][ j ] ) ; 
			}
		}
		// in ra ket qua
		cout << n - f[ 1 ][ n ] << endl;
	}
	return 0 ; 
}