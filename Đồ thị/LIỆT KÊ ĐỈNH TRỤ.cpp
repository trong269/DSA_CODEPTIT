#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
int n , m ; 
vector<int> ke[ 1005 ];
bool used[ 1005 ];

void nhap(){
	memset( used , false , sizeof ( used ));
	for( auto &v : ke )v.clear();
	
	cin >> n >> m ; 
	for( int i = 1 ; i <= m ; i ++ ){
		int u , v ; cin >> u >> v ; 
		ke[ u ].push_back( v );
		ke[ v ].push_back( u );
	}
}

void DFS( int u ){
	used[ u ] = true ; 
	for( auto v : ke[ u ] ){
		if ( !used[ v ] ){
			DFS( v ) ; 
		}
	}
}

int tplt(){
	int cnt = 0 ; 
	for( int i = 1 ;i <= n ; i ++ ){
		if ( !used[ i ] ){
			cnt ++ ; 
			DFS( i ) ; 
		}
	}
	return cnt ; 
}

int main(){
	int t ; cin >> t; 
	while( t-- ){
		nhap();
		int cnt = tplt();
		for( int i = 1 ; i <= n ; i ++ ){
			memset( used , false , sizeof ( used ));
			used[ i ] = true ; 
			if ( tplt() > cnt )cout << i << " ";
		}
		cout << endl;
	}
	
	return 0 ; 
}