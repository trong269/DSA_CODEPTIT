#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n , m ; 
int parent[1005 ];
int num[ 1005 ];
void init(){
	for( int i = 1 ;i <= n ; i ++ ){
		num[ i ] = 1 ;
		parent[ i ] = i ; 
	}
	 
}

int find( int u ){
	if( u == parent[ u ] )return u ; 
	return find( parent[ u ] );
}

bool Union( int u , int v ){
	int a = find( u );
	int b = find ( v );
	if( a == b )return false;
	if( num[ a ] < num[ b ] )swap( a , b ); 
	parent[ b ] = a ;
	num[ a ] += num[ b ];
	return true ; 
}


int main(){
	int t ; cin >> t ; 
	while( t-- ){
		cin >> n >> m ; 
	    init();
	    bool check = false ;
	    while( m -- ){
	    	int u , v ; cin >> u >> v ; 
	    	if ( !Union( u , v ) )check = true ; 
		}
		if( check )cout << "YES\n";
		else cout << "NO\n";
	}
	
	return 0;
}