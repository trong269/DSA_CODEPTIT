#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 

int f[ 105 ][ 105 ]; 

int main(){
	int t ; cin >> t; 
	while(t -- ){
		string s1 , s2 ; cin >> s1 >> s2 ; 
		int n = s1.size() , m = s2.size();
		s1 = "@" + s1 ; s2 = "@" + s2 ; 
		for( int j = 0 ; j <= m ; j ++ )f[ 0 ][ j ] = j ; // them vao j ptu
		for( int i = 0 ; i <= n ; i ++ )f[ i ][ 0 ] = i ; // xoa di i ptu
		for( int i = 1 ; i <= n ; i ++ ){
			for( int j = 1 ; j <= m ; j ++ ){
				if ( s1[ i ] == s2[ j ] ){
					f[ i ][ j ] = f[ i - 1 ][ j - 1 ]; // khong can bien doi
				}
				else { 
				    // co 3 cach:
				    // replace ptu thu i trong s1 thanh ptu thu j trong s2 + so buoc f[ i - 1 ][ j - 1 ]
				    // insert them 1 ptu vao s1 + so buoc f[ i ][ j - 1 ]
				    // dalete ptu thu i trong s1 + so buoc f[ i - 1 ][ j ];
					f[ i ][ j ] = min( { f[ i - 1 ][ j - 1 ] , f[ i ][ j - 1 ] , f[ i - 1 ][ j ] }) + 1 ; 
				}
			}
		}
		cout << f[ n ][ m ] << endl;
	}
	return 0 ; 
}