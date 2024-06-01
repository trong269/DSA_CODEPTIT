#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
int n , m ;
vector<int> ke[ 1005 ] ; 
bool used[ 1005 ] ;
bool ok  = false ; 
void nhap(){
	memset( used , false , sizeof ( used )); 
	for( auto &x : ke )x.clear() ; 
	cin >> n >> m; 
	while( m-- ){
		int u , v ; cin >> u >> v; 
		ke[ u ].push_back( v ) ; 
		ke[ v ].push_back( u ) ; 
	}
}
void DFS( int u , int cnt ){
	if ( cnt == n ){
		ok = true ; 
		return ; 
	}
	used [ u ] = true ; 
	for( auto v : ke [ u ] ){
		if ( !used[ v ] ){
			DFS( v , cnt + 1 ) ; 
		}
	}
	used[ u ] = false ; 
}
int main(){
	int te; cin >> te ; 
	while( te-- ){
		nhap() ; 
		ok = false ; 
		for( int i = 1; i <= n ; i ++ ){
		    memset( used , false , sizeof ( used )); 
			DFS( i , 1 ); 
		}
		if ( ok ) cout << 1 << endl;
		else cout << 0 << endl;
	}
	return 0 ; 
}