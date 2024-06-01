#include<bits/stdc++.h>
using namespace std ; 
#define ll long long

void display( int x[ ] , int n ){
	for( int i = 1 ; i <= n ; i ++ )cout << x[ i ]  ; 
	cout << " " ; 
}

int main(){
	int t ; cin >> t ; 
	while( t -- ){
		int n ; cin >> n ; 
		vector<vector<string>> v( n + 1 ); 
		v[ 1 ].push_back( "0" ); 
		v[ 1 ].push_back( "1" ); 
		for ( int i = 2 ; i <= n ; i ++ ){
			vector<string> v1 = v[ i - 1 ] ; 
			vector<string> v2; 
			for( int j = v1.size() - 1 ; j >= 0 ; j -- )v2.push_back( v1[ j ] );
			for ( int j = 0 ; j < v1.size() ; j ++ ){
				v1[ j ] = "0" + v1[ j ] ;
				v[ i ].push_back( v1[ j ] ); 
			} 
			for( int j = 0 ; j < v1.size() ; j ++ ){
				v2[ j ] = "1" + v2[ j ] ; 
				v[ i ].push_back( v2[ j ] ); 
			}
		}
		for( auto x : v[ n ] )cout << x << " " ; 
		cout << endl;
		
	}
	
	return 0 ; 
}

// gray[ 0 ] = { 0 } , gray[ 1 ] = { 0 , 1 }
// luôn bắt đầu xuất phát từ gray[ 1 ] để sinh ra lần lượt các gray code phía sau
// gray[ n ] = "0" + gray[ n - 1 ] nối với "1" + reverse( gray[ n - 1 ] )