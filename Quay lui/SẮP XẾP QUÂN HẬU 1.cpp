#include<bits/stdc++.h>
using namespace std ;
int x[ 100 ]; 
int hang [ 100 ] = {0}; 
int cot[ 100 ] =  {0}; 
int xuoi[ 100 ] = {0};
int nguoc[ 100 ] = {0};
int cnt = 0 ; 
int n ; 
void back( int i ){
	for ( int j = 1 ; j <= n ; j ++ ){
		if ( hang[ i ] == 0 and cot[ j ] == 0 and xuoi[ i - j + n ] == 0 and nguoc[ i + j - 1 ] == 0 ){
			x[ i ] = j ; 
			hang[ i ] = cot[ j ] = xuoi[ i - j + n ] = nguoc[ i + j - 1 ] = 1 ; 
			if ( i == n )cnt ++ ; 
			else back ( i + 1 ); 
			hang[ i ] = cot[ j ] = xuoi[ i - j + n ] = nguoc[ i + j - 1 ] = 0 ; 
		}
	}
}

int main(){
	int t ; cin >> t ; 
	while( t -- ){
		cin >> n ; 
		back( 1 ) ; 
		cout << cnt << endl;
		cnt = 0; 
	}
	
	return 0 ; 
}