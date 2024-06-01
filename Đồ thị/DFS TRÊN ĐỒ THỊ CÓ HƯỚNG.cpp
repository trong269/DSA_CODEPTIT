#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 
int n , m , s ; 
vector<int> ke[ 1005 ];
bool used[ 1005 ];
void nhap(){
	memset( used , false , sizeof( used ));
	for( auto &v : ke ) v.clear();
	cin >> n >> m >> s ; 
	for( int i = 1 ; i <= m ; i ++ ){
		int u , v ; cin >> u >> v ; 
		ke[ u ].push_back( v ) ; 
	}
}

void DFS( int u ){
	cout << u << " " ; 
	used[ u ] = true ; 
	for( auto v : ke[ u ] ){
		if ( !used[ v ] ){
			DFS( v ) ; 
		}
	}
}

int main(){
	int t ; cin >> t ; 
	while( t-- ){
		nhap();
		DFS( s );
		cout << endl;
	}
	
	return 0 ; 
}