#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 
int n , m , q , s , t ; 
vector<int> ke[ 1005 ] ; 
bool used[ 1005 ] ; 
int tplt[ 1005 ]; 
void nhap(){
	memset( used , false , sizeof( used ));
	for( auto &v : ke )v.clear();
	
	cin >> n >> m ; 
	for( int i = 1 ;i <= m ; i ++ ){
		int u , v ; cin >> u >> v ; 
		ke[ u ].push_back( v ); 
		ke[ v ].push_back( u );
	}
}

void DFS( int u, int cnt ){
	tplt[ u ] = cnt ; 
	used[ u ] = true ; 
	for( auto v : ke[ u ] ){
		if ( !used[ v ] ){
			DFS( v, cnt ) ; 
		}
	}
}

int main(){
	int te ; cin >> te ; 
	while( te-- ){
		nhap(); 
		int cnt = 0 ; 
		for( int i = 1 ;i <= n; i ++ ){
			if ( used[ i ] == false ){
				cnt ++ ; 
				DFS( i , cnt ) ; 
			}
		}
		cin >> q ; 
		while( q-- ){
			cin >> s >> t ; 
			if ( tplt[ s ] == tplt[ t ] )cout << "YES\n";
			else cout << "NO\n";
		}
		
	}
	
	return 0 ; 
}