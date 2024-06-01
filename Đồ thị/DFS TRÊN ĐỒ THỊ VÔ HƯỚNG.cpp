#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
int n , m , s ; 
vector<int> ke[ 1005 ]; 
bool used[ 1005 ] ; 

void nhap(){
	memset( used , false , sizeof ( used ) ) ; 
	for( auto &x : ke )x.clear() ; 
	
	cin >> n >> m >> s; 
	while( m -- ){
		int u , v ; cin >> u >> v ; 
		ke[ u ].push_back( v ); 
		ke[ v ].push_back( u ); 
	}
}

void dfs( int u ){
	used[ u ] = true ; 
	cout << u << " " ; 
	for( auto v : ke[ u ] ){
		if (!used[ v ] ){
			dfs( v ) ; 
		}
	}
}

int main(){
	int t ; cin >> t; 
	while( t-- ){
		nhap() ; 
		dfs( s ) ; 
		cout << endl;
	}
	
	return 0 ; 
}