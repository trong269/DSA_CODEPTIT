#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
int n , m ; 
int parent[ 1005 ] , num[ 1005 ] ; 

void init(){
	for( int i = 1 ; i <= n ; i ++ ){
		parent[ i ] = i; 
		num[ i ] = 1; 
	}
}
int find ( int u ){
	if ( parent[ u ] == u )return u ; 
	return find ( parent[ u ] ) ; 
}
bool Union(int u , int v){
	int a = find ( u ) ; 
	int b = find ( v ); 
	if ( a == b ){
		return false ; 
	}
	if( num[ a ] < num[ b ] )swap( a , b ) ; 
	num[ a ] += num[ b ] ; 
	parent[ b ] = a; 
	return true ; 
}
int main(){
	int te; cin >> te ; 
	while( te-- ){
		cin >> n >> m ; 
		init() ; 
		bool ok = false ; 
		while( m -- ){
			int u , v ; cin >> u >> v; 
			if( !Union( u , v ) )ok = true ; 
		}
		if( ok ) cout << "YES\n" ; 
		else cout << "NO\n" ; 
	}
	return 0 ; 
}