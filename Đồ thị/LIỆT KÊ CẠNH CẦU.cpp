#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
int n , m ; 
vector<int> ke[ 1005 ] ; 
bool used[ 1005 ] ; 
vector<pair<int,int>> canh ; 

void nhap(){
	memset( used , false , sizeof ( used )); 
	for( auto &v : ke )v.clear() ; 
	canh.clear() ; 
	cin >> n >> m; 
	while( m -- ){
		int u , v ; cin >> u >> v ; 
		ke[ u ].push_back( v ) ; 
		ke[ v ].push_back( u ) ; 
		canh.push_back( {u, v});
	}
}

void DFS( int u , int s , int t ){
	used[ u ] = true ; 
	for( auto v : ke[ u ] ){
		if ( ( u == s and v == t ) or ( u == t and v == s ) )continue ; 
		if ( !used[ v ] ){
			DFS( v , s , t ) ; 
		}
	}
}

int tplt (int s = 0 , int t = 0 ){
	int cnt = 0 ; 
	for( int i = 1 ; i <= n ; i ++ ){
		if ( !used [ i ] ){
			cnt ++ ; 
			DFS( i , s , t ) ; 
		}
	}
	return cnt ; 
}
int main(){
	int te; cin >> te ; 
	while( te-- ){
		nhap() ; 
		int cnt = tplt( ) ; 
		for( auto e : canh ){
			memset( used , false , sizeof ( used ) );
			int s = e.first , t = e.second ; 
			if ( cnt < tplt( s , t ) )cout << s << " " << t << " " ; 
		}
		cout << endl;
	}
	
	return 0 ; 
}