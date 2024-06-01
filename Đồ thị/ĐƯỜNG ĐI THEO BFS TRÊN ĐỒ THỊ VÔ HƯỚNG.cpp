#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
int n , m , s , t ; 
vector<int> ke[ 1005 ];
bool used[ 1005 ];
int e[ 1005 ];

void nhap(){
	memset(used , false , sizeof ( used ));
	memset( e , 0 , sizeof( e ) );
	for( auto &v : ke )v.clear();
	
	cin >> n >> m >> s >> t ; 
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

int main(){
	int te ; cin >> te ; 
	while( te-- ){
		nhap();
		BFS( s ) ; 
		if ( used[ t ] ){
			stack<int> st ; 
			while( t != 0 ){
				st.push( t ) ; 
				t = e[ t ] ; 
			}
			while( !st.empty() ){
				cout << st.top() << " ";
				st.pop();
			}
		}
		else {
			cout << -1 ; 
		}
		cout << endl;
	}
	
	return 0 ; 
}