#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 

int main(){
	
	int t ; cin >> t ; 
	while( t-- ){
		int n , k ; cin >> n >> k ; 
		int a[ n ] ; 
		for( auto &x : a ){
			cin >> x ; 
			x = x % k ;
		}
		// bai toan co so khi chi co 1ptu la a[0] 
		int f[ n ][ k ];
		for( int i = 0 ; i < n ; i ++ ){
			for( int j = 0 ; j < k ; j ++ ){
				f[ i ][ j ] = -1e9 ; 
				// phai ktao gia am de tranh truong hop khong co day nao thoa man f[i][j] nhung lai phat hien ra
			}
		} 
		f[ 0 ][ a[ 0 ] ] = 1 ;
		// xay dung f[i][j]
		for( int i = 1 ; i <= n - 1 ; i ++ ){
			for( int j = 0 ; j < k ; j ++ ){
				//TH1: f[i][j] = f[i-1][j] => bo qua a[i] lay ket qua cua buoc truoc
				//TH2: f[i][j] = f[i-1][ ((j+k-a[i]) % k] => lay a[i]
				f[ i ][ j ] = max( f[ i - 1 ][ j ], f[ i - 1 ][ (j + k - a[ i ]) % k ] + 1 ); 
			}
		}
		cout << f[ n - 1 ][ 0 ] << endl;
	}
	return 0 ; 
}