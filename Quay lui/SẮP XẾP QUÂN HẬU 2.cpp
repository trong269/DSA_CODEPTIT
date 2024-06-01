#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
int a[ 8 ][ 8 ];
bool nguoc[ 100 ] , xuoi[ 100 ], cot[ 100 ];
int x [ 100 ] ; 
int value = -1e9 ; 
void back( int i , int sum ){
	for( int j = 0 ; j < 8 ; j ++ ){
		if( !cot[ j ] and !xuoi[ i + j - 1 ] and !nguoc[ i - j + 7 ] ){
			x[ i ] = j ; 
			cot[ j ] = xuoi[ i + j - 1 ] = nguoc[ i - j + 7 ] = true ; 
			if ( i == 7 ){
				value = max( value , sum + a[ i ][ j ] ); 
			}
			else back( i + 1 , sum + a[ i ][ j ] ) ; 
			cot[ j ] = xuoi[ i + j - 1 ] = nguoc[ i - j + 7 ] = false ;
		}
	}
}


int main(){
	int t ; cin >> t ; 
	while(t -- ){
		value = -1e9 ;  
		for( int i = 0 ; i < 8 ; i ++ ){
			for( int j = 0 ; j < 8 ; j ++ )cin >> a[ i ][ j ]; 
		}
		back( 0 , 0 ) ; 
		cout << value << endl; 
	}
	
	return 0 ; 
}