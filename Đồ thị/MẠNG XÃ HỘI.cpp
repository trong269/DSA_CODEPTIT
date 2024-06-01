#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n , m ; 
vector<int> ke[ 100005 ];
bool used[ 100005 ];

void nhap(){
	memset( used , false , sizeof( used ));
	for( auto &x : ke )x.clear();
	
	cin >> n >> m ; 
	while( m -- ){
		int u , v ; cin >> u >> v ; 
		ke[ u ].push_back( v );
		ke[ v ].push_back( u );
	}
}

void DFS( int u ){
	used[ u ] = true ;
	for( auto v : ke[ u ] ){
		if ( !used[ v ]){
			DFS( v );
		}
	}
}

int tplt(){
	int cnt = 0; 
	for( int i = 1 ;i <= n ; i ++ ){
		if ( !used[ i ] ){
			cnt ++ ; 
			DFS( i ) ; 
		}
	}
	return cnt ; 
}

int main(){
	int t ; cin >> t ; 
	while( t-- ){
		nhap();
		if ( tplt() == 1 )cout << "YES\n";
		else cout << "NO\n";
	}
	
	return 0 ; 
}