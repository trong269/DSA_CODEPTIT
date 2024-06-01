#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n , m ; 
vector<int> ke[ 1005 ];
int color[ 1005 ];

void nhap(){
	memset( color , 0 , sizeof( color ));
	for( auto &x : ke )x.clear();
	cin >> n >> m ; 
	while( m-- ){
		int u , v ; cin >> u >> v ; 
		ke[ u ].push_back(v);
	}
}

bool DFS( int u ){
	color[ u ] = 1 ; 
	for( auto v : ke[ u ]){
		if ( !color[ v ] ){
			if ( DFS(v) )return true ;  
		}
		else if ( color[ v ] == 1 ){
			return true ;  
		}
	}
	color[ u ] = 2 ; 
	return false ; 
}


int main(){
	int t ; cin >> t; 
	while( t-- ){
		nhap(); 
		bool ok = false ; 
		for( int i = 1 ; i <= n ; i ++ ){
			if ( !color[ i ] ){
				if ( DFS( i ) )ok = true ; 
			}
		}
		if ( ok )cout << "YES\n";
		else cout << "NO\n";
	}
	
	return 0 ; 
}