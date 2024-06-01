#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
int n , m ; 
int parent[ 100005 ] , num[ 100005]; 
void init(){
	for( int i = 1; i <= n ; i ++ ){
		parent[ i ] = i ; 
		num[ i ] = 1; 
	}
} 
int find( int u ){
	if ( u == parent[ u ] ) return u ; 
	return parent[ u ] = find ( parent[ u ] ) ; 
}
bool Union( int u , int v ){
	int a = find ( u ) ; 
	int b = find ( v ) ; 
	if ( a == b ) return false ; 
	if ( num[ a ] < num[ b ] )swap ( a , b ) ; 
	num[ a ] += num[ b ] ; 
	parent[ b ] = a ; 
	return true ; 
}

int main(){
	
	int te ; cin >> te; 
	while( te-- ){
		cin >> n >> m ; 
		init() ; 
		while( m -- ){
			int u, v ; cin >> u >> v; 
			Union(u, v) ; 
		}
		int maxx = -1e9; 
		for( int i = 1 ; i <= n ; i ++ ){
			if ( i == parent[ i ] ){
				maxx = max( maxx , num[ i ] ) ; 
			}
		}
		cout << maxx << endl;
	}
	return 0 ; 
}