#include<bits/stdc++.h>
using namespace std ; 
#define ll  long long

class canh {
	public:
	int u , v , w ; 	
};

int n , m ;
vector<canh> ds;
int parent[ 10005 ], num[  10005 ];
void nhap(){
	ds.clear();
	cin >> n >> m ; 
	while( m-- ){
		int u , v , w ; cin >> u >> v >> w ; ;
		ds.push_back( { u , v , w } );
	}
}
void init(){
	for( int i = 1 ; i <= n ; i ++ ){
		parent[ i ] = i ; 
		num[ i ] = 1 ; 
	}
}
int find ( int u ){
	if ( parent[ u ] == u )return u ; 
	return find( parent[ u ] );
}
bool Union( int u , int v ){
	int a = find( u );
	int b = find( v );
	if( a == b )return false ; 
	if( num[ a ] < num[ b ] )swap( a , b );
	num[ a ] += num[ b ]; 
	parent[ b ] = a ; 
	return true ; 
}
bool cmp ( canh a , canh b ){
	return a.w < b.w ; 
}
int Kruskal(){
	init();
	sort( ds.begin() , ds.end() , cmp );
	int kq = 0 ; 
	vector<canh> MST;
	for( auto e : ds ){
		if( Union( e.u , e.v ) ){
			MST.push_back( e );
			kq += e.w ; 
		}
		if ( MST.size() == n - 1 )break ; 
	}
	return kq ; 
}
int main(){
	int t ; cin >> t ; 
	while( t-- ){
		nhap();
		cout << Kruskal() << endl;
	}
	return 0;
}