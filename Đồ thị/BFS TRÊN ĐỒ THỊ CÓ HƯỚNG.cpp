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

void BFS( int u ){
	queue<int> q; 
	used[ u ] = true ; 
	q.push( u ) ; 
	while(!q.empty()){
		int tmp = q.front(); q.pop() ; 
		cout << tmp << " " ; 
		for( auto v : ke[ tmp ] ){
			if ( !used[ v ] ){
				q.push( v ) ;
				used[ v ] = true ;
			}
		}
	}
}

int main(){
	int t ; cin >> t ; 
	while( t-- ){
		nhap();
		BFS( s );
		cout << endl;
	}
	
	return 0 ; 
}