#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
int n , m ; 
vector<int> ke[ 1005 ] ; 
bool used[ 1005 ] ; 
vector<int> v ;
void nhap(){
	memset( used , false , sizeof( used )); 
	for( auto &x : ke )x.clear() ;
	v.clear() ; 
	cin >> n >> m ; 
	while ( m -- ){
		int u , v ; cin >> u >> v; 
		ke[ u ].push_back( v ) ; 
	}
}

void DFS( int u ){
	used[ u ] = true ; 
	v.push_back( u ) ; 
	for( auto v : ke[ u ] ){
		if ( !used[ v ] ){
			DFS( v ) ; 
		}
	}
}
bool check( ){
	for( int i = 1; i <= n ; i ++ ){
		memset( used , false , sizeof ( used )); 
		v.clear() ; 
		DFS( i ); 
		if ( v.size() != n ) return false ; 
	}
	return true ; 
}
int main(){
	int te; cin >> te ; 
	while( te-- ){
		nhap(); 
		if ( check() )cout << "YES\n"; 
		else cout << "NO\n"; 
	}
	
	return 0 ; 
}