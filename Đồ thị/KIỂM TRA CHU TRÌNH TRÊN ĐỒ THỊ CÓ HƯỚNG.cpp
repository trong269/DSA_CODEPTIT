#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
int n , m ;
vector<int> ke[ 1005 ] ; 
int flag[ 1005 ] ; 

void nhap(){
	memset( flag , 0 , sizeof ( flag ) ); 
	for( auto &x : ke )x.clear() ; 
	cin >> n >> m ; 
	while( m -- ){
		int u , v ; 
		cin >> u >> v; 
		ke[ u ].push_back ( v ) ; 
	}
}
bool DFS( int u ){
	flag[ u ] = 1; 
	for( auto v : ke[ u ] ){
		if ( flag[ v ] == 0 ){
			if ( DFS( v ) ) return true ; 
		}
		else if ( flag[ v ] == 1 ){
			return true ; 
		}
	}
	flag[ u ] = 2 ;
	return false ; 
}
int main(){
	int te; cin >> te ; 
	while( te-- ){
		nhap() ; 
		bool ok = false ; 
		for( int i = 1; i <= n ; i ++ ){
			memset( flag , 0 , sizeof ( flag )); 
			if ( DFS( i ) ) ok = true ; 
		}
		if ( ok ) cout << "YES\n" ; 
		else cout << "NO\n" ; 
	}
	return 0 ; 
}