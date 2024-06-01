#include<bits/stdc++.h>
using namespace std ; 
pair<int,int> p[ 2 ] = { { 1 , 0 } , { 0 , 1 } }; 
int n , m ; 
int a[ 101 ][ 101 ]; 
int cnt = 0 ; 

void back( int i , int j ){
	if ( i == n and j == m ){
		cnt ++ ; 
	}
	else {
		for( int k = 0 ; k <= 1 ; k ++ ){
			int in = i + p[ k ].first ; 
			int jn = j + p[ k ].second ; 
			if ( in > 0 and in <= n and jn > 0 and jn <= m ){
				back( in , jn ) ; 
			}
		}
	}
}

int main(){
	int t ; cin >> t ; 
	while( t -- ){
		cin >> n >> m ; 
		for( int i = 1 ; i <= n ; i ++ ){
			for( int j = 1 ; j <= m ;j ++ ){
				cin >> a[ i ][ j ] ; 
			}
		}
		back( 1 , 1 ) ; 
		cout << cnt ;
		cnt = 0 ; 
		cout << endl;
	}
	
	return 0 ; 
}