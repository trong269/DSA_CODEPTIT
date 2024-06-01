#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
int n , m ; 
int d[ 105 ][ 105 ];

void init(){
	for( int i = 1 ; i <= 100 ; i ++ ){
		for( int j = 1 ; j <= 100 ; j ++ ){
			if ( i != j )d[ i ][ j ] = 1e9 ; 
			else d[ i ][ j ] = 0;
		}
	}
	
}
void nhap(){
	cin >> n >> m ; 
	while( m-- ){
		int u , v ; cin >> u >> v ;
		d[ u ][ v ] = 1 ; 
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
	int kq = 0; 
	int dem = 0;
	for( int i = 1 ; i <= n ; i ++ ){
		for( int j = 1 ; j <= n ; j ++ ){
			if ( i != j and d[ i ][ j ] != 1e9 ){
				kq += d[ i ][ j ];
				dem ++ ; 
			}
		}
	}
	cout << fixed << setprecision(2) << (kq* 1.0 / dem )<< endl;
}
int main(){
	int t ; cin >> t;
	while( t-- ){
		init();
		nhap();
		Floy();
	}
	
	return 0 ; 
}