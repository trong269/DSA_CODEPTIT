#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
int n , m ; 
vector<int> ke[ 1005 ];
bool used[ 1005 ];
int e[ 1005 ];

void nhap(){
	memset(used , false , sizeof ( used ));
	memset( e , 0 , sizeof( e ) );
	for( auto &v : ke )v.clear();
	
	cin >> n >> m; 
	for( int i = 1 ; i <= m ; i ++ ){
		int u , v ; cin >> u >> v ; 
		ke[ u ].push_back( v ); 
		ke[ v ].push_back( u );
	}
}

void BFS( int u ){
	e[ u ] = 0 ; 
	used[ u ] = true ; 
	queue<int> q ; 
	q.push( u );
	while( !q.empty() ){
		int tmp = q.front(); q.pop();
		for( auto v : ke[ tmp ] ){
			if ( used[ v ] == false ){
				used[ v ] = true ; 
				e[ v ] = tmp ; 
				q.push( v ) ; 
			}
		}
	}
}

int tplt(){
	int cnt = 0 ; 
	for( int i = 1 ; i <= n ; i ++ ){
		if ( used[ i ] == false ){
			cnt ++ ; 
			BFS( i ) ; 
		}
	}
	return cnt ; 
}
int main(){
	int te ; cin >> te ; 
	while( te-- ){
		nhap();
		cout << tplt() << endl;
	}
	
	return 0 ; 
}