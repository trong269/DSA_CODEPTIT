#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
int n ;
vector<int> ke[ 100005 ]; 
bool used[ 100005 ];

void nhap(){
	memset( used , false , sizeof( used ));
	for( auto &x : ke )x.clear(); 
	cin >> n ; 
	for( int i = 1 ; i < n; i ++ ){
		int u , v; cin >> u >> v ; 
		ke[ u ].push_back( v ); 
		ke[ v ].push_back( u ); 
	}
}
int maxx = -1e9 ; 

void DFS( int u , int cnt ){
	maxx = max( maxx , cnt );
	used[ u ] = true ; 
	for( auto v : ke[ u ] ){
		if( used[ v ] == false ){
			DFS( v , cnt + 1 ) ; 
		}
	}
}
int main(){
	int t ; cin >> t ; 
	while( t-- ){
		nhap();
		maxx = -1e9 ; 
		DFS( 1 , 0 ); 
		cout << maxx << endl;
	}
	
	return 0 ; 
}