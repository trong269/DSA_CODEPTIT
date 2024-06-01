#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
int n , m , s ; 
vector<int> ke[ 1005 ]; 
bool used[ 1005 ] ; 

void nhap(){
	memset( used , false , sizeof ( used ) ) ; 
	for( auto &x : ke )x.clear() ; 
	
	cin >> n >> m >> s; 
	while( m -- ){
		int u , v ; cin >> u >> v ; 
		ke[ u ].push_back( v ); 
		ke[ v ].push_back( u ); 
	}
}

void bfs( int u ){
	queue<int> q ; 
	q.push( u ) ; 
	used[ u ] = true ; 
	while( !q.empty() ){
		int top = q.front() ; q.pop() ; 
		cout << top << " " ; 
		for( auto v : ke[ top ] ){
			if ( !used[ v ] ){
				used[ v ] = true ; 
				q.push( v ) ; 
			}
		}
	}
}


int main(){
	int t ; cin >> t; 
	while( t-- ){
		nhap() ; 
		bfs( s ) ; 
		cout << endl;
	}
	
	return 0 ; 
}