#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
int n , m ; 
vector<int> ke[ 1005 ] ; 
bool used[ 1005 ] ; 

void nhap(){
	memset( used , false , sizeof( used )); 
	for( auto &v : ke )v.clear() ; 
	cin >> n >> m ; 
	while ( m -- ){
		int u , v ; cin >> u >> v; 
		ke[ u ].push_back( v ) ; 
		ke[ v ].push_back( u ) ; 
	}
}

void DFS( int u ){
	used[ u ] = true ; 
	for( auto v : ke [ u ] ){
		if ( !used[ v ] ){
			DFS( v ) ; 
		}
	}
}
int tplt ( ){
	int cnt = 0 ; 
	for( int i = 1; i <= n ; i ++ ){
		if ( !used[ i ] ){
			cnt ++ ; 
			DFS( i ) ; 
		}
	}
	return cnt ; 
}
int check(){
	if( tplt() > 1 )return 0 ; 
	int le = 0 ; 
	for( int i = 1 ; i <= n ; i ++ ){
		if ( ke[ i ].size() % 2 == 1 )le ++ ; 
	}
	if ( le == 0 )return 2 ; 
	else if ( le <= 2 )return 1 ; 
	return 0 ; 
}
int main(){
	int te; cin >> te ; 
	while( te-- ){
		nhap() ; 
		cout << check( ) << endl;
	}
	
	return 0 ; 
}