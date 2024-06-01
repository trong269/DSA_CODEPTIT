#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
int f[ 1005 ][ 1005 ];

int main(){
	int t ; cin >>t ; 
	while( t-- ){
		string s ; cin >> s ; 
		int n = s.size() ; 
		s = "@" + s ;
		// bai toan co so 
		for( int i = 1 ; i <= n ; i ++ )f[ i ][ i ] = true ; 
		// xay dung f[i][j]
		for( int i = n ; i > 0 ; i -- ){
			for( int j = i + 1 ; j <= n ; j ++ ){
				f[ i ][ j ] = false ; 
				if ( s[ i ] == s[ j ] ){
					if ( j == i + 1 )f[ i ][ j ] = true ; 
					else if ( f[ i + 1][ j - 1 ] )f[ i ][ j ] = true ; 
				}
			}
		}
		int maxx = 1 ; 
		for( int i = 1 ; i <= n ;i ++ ){
			for( int j = i ; j <= n ; j ++ ){
				if ( f[ i ][ j ] ) maxx = max( maxx , j - i + 1 ) ; 
			}
		}
		cout << maxx << endl;
	}
	
	return 0 ; 
}