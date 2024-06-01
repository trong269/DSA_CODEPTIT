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
vector<vector<int>> res ; 
vector<int> ve ; 
void DFS( int u ){
	used[ u ] = true ;
	ve.push_back( u ); 
	bool check = true ;
	for( auto v : ke[ u ] ){
		if( used[ v ] == false ){
			DFS( v ) ; 
			check = false ; 
		}
	}
	if ( check ){
		res.push_back( ve ); 	
	}
	ve.pop_back();
}
bool cmp ( vector<int> a , vector<int> b ){
	int x = *(a.rbegin()) , y = *(b.rbegin());
	return x < y ; 
}
int main(){
	int t ; cin >> t ; 
	while( t-- ){
		nhap();
		ve.clear(); 
		res.clear();
		DFS( 1 ); 
		sort( res.begin(), res.end() , cmp ); 
		for( auto v : res ){
			for( auto x : v ){
				cout << x << " " ; 
			}
			cout << endl;
		}
	}
	
	return 0 ; 
}