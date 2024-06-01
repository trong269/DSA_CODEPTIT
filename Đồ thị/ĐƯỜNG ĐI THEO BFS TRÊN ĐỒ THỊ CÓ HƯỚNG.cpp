#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
int n , m , s, t ; 
vector<int> ke[ 1005 ] ; 
bool used[ 1005 ] ; 
int e[ 1005 ] ; 

void nhap(){
	memset( used , false , sizeof ( used )); 
	for( auto &v : ke )v.clear() ; 
	cin >> n >> m >> s >> t ; 
	while( m -- ){
		int u , v ; cin >> u >> v ; 
		ke[ u ].push_back( v ) ; 
	}
}

void DFS( int u ){
	used[ u ] = true ; 
	for( auto v : ke [ u ] ){
		if ( !used[ v ] ){
			e[ v ] = u ; 
			DFS( v ) ; 
		}
	}
}
void BFS( int u ){
	queue<int> q ; 
	q.push( u ) ; 
	used[ u ] = true ; 
	e[ u ] = 0 ; 
	while( !q.empty()){
		int top = q.front() ; q.pop() ; 
		for( auto v : ke[ top ] ){
			if ( !used[ v ] ){
				used[ v ] = true ; 
				e[ v ] = top ; 
				q.push( v ) ; 
			}
		}
	}
}
int main(){
	int te; cin >> te ; 
	while( te-- ){
		nhap() ; 
		e[ s ] = 0 ; 
		BFS( s ) ; 
		if( used[ t ] == false ){
			cout << -1 << endl;
			continue ; 
		}
		stack<int> st ; 
		st.push( t ) ; 
		while( e[ t ] != 0 ){
			st.push( e[ t ] ); 
			t = e[ t ] ; 
		}
		while( !st.empty() ){
			cout << st.top() << " " ; st.pop() ; 
		}
		cout << endl;
	}
	
	return 0 ; 
}