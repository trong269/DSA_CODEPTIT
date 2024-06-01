#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
int n , m , t ; 
vector<int> ke[ 1005 ] ; 
bool used [ 1005 ]; 
int parent[ 1005 ] ; 
bool ok = false ; 
void nhap(){
	memset( used , false , sizeof( used )); 
	memset( parent , 0 , sizeof ( parent )); 
	for( auto &x : ke )x.clear() ; 
	cin >> n >> m ; 
	while( m -- ){
		int u , v ; cin >> u >> v  ; 
		ke[ u ].push_back( v ) ; 
		ke[ v ].push_back( u ) ; 
	}
	for( auto &v : ke )sort( v.begin() , v.end() ); 
}
bool DFS( int u ){
	used[ u ] = true ; 
	for( auto v : ke[ u ] ){
		if( !used[ v ] ){
			parent[ v ] = u ; 
			if ( DFS( v ) )return true ; 
		}
		else if ( parent[ u ] != 1 and v == 1 and !ok ){
			ok = true ; 
			t = u ; 
			return true ; 
		}
	}
	return false ; 
}

int main(){
	int te ; cin >> te; 
	while( te-- ){
		nhap() ; 
		parent[ 1 ] = 0 ; 
		ok = false ; 
		if ( DFS( 1 ) ){
			stack<int> st ; 
			st.push( 1 ) ; 
			st.push( t ) ; 
			while( parent[ t ] != 0 ){
				st.push( parent[ t ] ) ; 
				t = parent[ t ] ; 
			}
			while( !st.empty() ){
				cout << st.top() << " " ; 
				st.pop() ; 
			}
			cout << endl;
		}
		else cout << "NO\n"; 
	}
	return 0 ; 
}