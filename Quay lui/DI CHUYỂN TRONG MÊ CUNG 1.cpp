#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
pair<int,int> p[ 2 ] = { { 1 , 0 } , { 0 , 1 } } ; 
int n ; 
int a[ 100 ][ 100 ] ; 
bool check = false ; 
void back ( int i , int j , string sum ){
	if( i == n and j == n ){
		check = true; 
		cout << sum << " " ; 
	}
	else{
		for( int k = 0 ; k <= 1 ; k ++ ){
			int in = i + p[ k ].first ; 
			int jn = j + p[ k ].second ;
			string tmp ; 
			if ( k == 0 )tmp = "D";
			else tmp = "R"; 
			if( in > 0 and jn > 0 and in <= n and jn <= n and a[ in ][ jn ] == 1 ){
				back( in , jn , sum + tmp ); 
			}
		}
	}
}

int main(){
	int t ; cin >> t ; 
	while( t -- ){
		cin >> n; 
		for( int i = 1 ; i <= n ; i ++ ){
			for( int j = 1 ; j <= n ; j ++ )cin >> a[ i ][ j ]; 
		}
		if ( a[ 1 ][ 1 ] == 0 ){
			cout << -1 << endl;
			continue ; 
		}
		back( 1 , 1 , "" );
		if ( !check )cout << -1; 
		check = false ; 
		cout << endl;
	}
	
	return 0 ; 
}