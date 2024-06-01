#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 

int dp [105 ][ 105 ][ 105 ];

int main(){
	int t ; cin >> t ; 
	while( t -- ){
		int x , y , z ; 
		cin >> x >> y >> z ; 
		string s1 , s2 , s3 ; cin >>  s1 >> s2 >> s3 ; 
		s1 = "@" + s1 ; s2 = "@" + s2 ; s3 = "@" + s3 ;
		for( int i = 0 ; i <= x ; i ++ )dp[ i ][ 0 ][ 0 ] = 0 ; 
		for( int i = 0 ; i <= y ; i ++ )dp[ 0 ][ i ][ 0 ] = 0 ;  
		for( int i = 0 ; i <= z ; i ++ )dp[ 0 ][ 0 ][ i ] = 0 ;
		for( int i = 0 ; i <= x ; i ++ ){
			for( int j = 0 ; j <= y ; j ++ ){
				dp[ i ][ j ][ 0 ] = 0 ; 
			}
		} 
		for( int i = 0 ; i <= y ; i ++ ){
			for( int j = 0 ; j <= z ; j ++ ){
				dp[ 0 ][ i ][ j ] = 0 ; 
			}
		}
		for( int i = 0 ; i <= x ; i ++ ){
			for( int j = 0 ; j <= z ; j ++ ){
				dp[ i ][ 0 ][ j ] = 0 ; 
			}
		}
		for( int i = 1 ; i <= x ; i ++ ){
			for( int j = 1 ; j <= y ; j ++ ){
				for( int k = 1 ; k <= z ; k ++ ){
					if ( s1[ i ] == s2[ j ] and s1[ i ] == s3[ k ] ){
						dp[ i ][ j ][ k ] =dp[ i - 1 ][ j - 1 ][ k - 1 ] + 1 ; 
					}
					else {
						dp[ i ][ j ][ k ] = max( {dp[ i ][ j - 1 ][ k - 1 ] , dp[ i - 1 ][ j ][ k - 1 ], dp[ i - 1 ][ j - 1 ][ k ] ,dp[ i ][ j ][ k - 1 ],dp[ i ][ j - 1 ][ k ],dp[ i - 1 ][ j ][ k ] });
						
					}
				}
			}
		}
		cout <<dp[ x ][ y ][ z ] << endl;
	}
	
	return 0 ; 
}