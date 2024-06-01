#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
#define INF 1e9
int n , m , s ; 
int d[ 1005 ][ 1005 ]; 

void nhap(){
	cin >> n >> m ; 
	for( int i = 1 ; i <= n ; i ++ ){
		for( int j = 1 ; j <= n ; j ++ ){
			if( i == j )d[ i ][ j ] = 0 ; 
			else d[ i ][ j ] = INF; 
		}
	}
	while( m -- ){
		int u , v , w; cin >> u >> v >> w ; 
		d[ u ][ v ] = d[ v ][ u ] = w ; 
	}
}
void Floy(){
	for( int k = 1 ; k <= n ; k ++ ){
		for( int i = 1 ; i <= n ; i ++ ){
			for( int j = 1 ; j <= n ; j ++ ){
				if ( d[ i ][ j ] > d[ i ][ k ] + d[ k ][ j ] ){
					d[ i ][ j ] = d[ i ][ k ] + d[ k ][ j ] ; 
				}
			}
		}
	}
}

int main(){
	nhap(); 
	Floy() ; 
	int q ; cin >>q ; 
	while( q-- ){
		int u , v ; cin >> u >> v ; 
		cout << d[ u ][ v ] << endl;
	}
	return 0 ; 
}