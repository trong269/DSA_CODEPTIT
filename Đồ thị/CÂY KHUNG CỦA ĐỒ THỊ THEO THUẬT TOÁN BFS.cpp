#include<bits/stdc++.h>
using namespace std; 
#define ll long long
int n ,m, s ; 
vector<int> ke[ 1005 ];
bool used[1005];
vector<pair<int,int>> MST;
void nhap(){
	memset(used , false , sizeof(used));
	MST.clear();
	for( auto &x : ke )x.clear();
	
	cin >> n >> m >> s ; 
	while( m-- ){
		int u , v ; cin >> u >> v ; 
		ke[u].push_back( v );
		ke[v].push_back( u );
	}
}

void BFS( int u ){
	used[ u ] = true ;
	queue<int> q ; 
	q.push( u );
	while( !q.empty() ){
		int tmp = q.front();q.pop();
		for( auto v : ke[ tmp ]){
			if( !used[ v ]){
				used[ v ] = true ; 
				MST.push_back( {tmp , v} );
				q.push(v);
			}
		}
	}
}

int main(){
	int te; cin >> te ; 
	while(te--){
		nhap();
		BFS( s ) ;

		if( MST.size() != n - 1 )cout << "-1\n";
		else {
			for( auto e : MST ){
				cout << e.first <<  ' ' << e.second << endl ; 
			}
		}
	}
	
	return 0;
}