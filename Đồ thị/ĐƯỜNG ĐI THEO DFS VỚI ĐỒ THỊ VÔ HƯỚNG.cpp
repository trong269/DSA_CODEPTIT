#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 

int n , m , s , t ; 
vector<int> ke[ 1005 ]; 
int f[ 1005 ];
bool used[ 1005 ]; 

void nhap(){
	memset( used, false , sizeof ( used ));
	for( auto &v : ke )v.clear(); 
	cin >> n >> m >> s >> t ; 
	for( int i = 1 ; i <= m ; i ++ ){
		int u , v ; cin >> u >> v ; 
		ke[ u ].push_back( v ) ; 
		ke[ v ].push_back( u ) ; 
	}
}

void DFS(int u){
	used[ u ] = true ; 
	for( auto v : ke[ u ] ){
		if ( !used[ v ] ){
			f[ v ] = u ; 
			DFS( v ) ; 
		}
	}
}

int main(){
	int te ; cin >> te ; 
	while( te-- ){
		nhap();
		f[ s ] = 0 ; 
		DFS( s ) ; 
		if ( used[ t ] == false )cout << -1 ; 
		else {
			stack<int> st ; 
			st.push( t ) ; 
			while( f[ t ] != 0 ){
				st.push( f[ t ] ); 
				t = f[ t ] ; 
			}
			while( !st.empty() ){
				cout << st.top() << " "; st.pop();
			}
		}
		cout << endl;
	}
	
	return 0 ; 
}