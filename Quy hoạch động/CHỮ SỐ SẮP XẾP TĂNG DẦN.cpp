#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
//bai tu nghi
//f[ i ][ j ] += f[ i - 1 ][ k ] ( 0 <= k <= j ),f[i][j] la so luong so co i chu so ket thuc bang chu so j tmdk
// 1 <= i <= N , 0 <= j <= 9
ll mod = 1e9 + 7 ; 
ll f[ 105 ][ 100 ] ; 
void init(){
	for( int i = 1 ;i <= 100 ; i ++ )f[ i ][ 0 ] = 1 ; 
	for( int j = 0; j <= 9 ; j ++ )f[ 1 ][ j ] = 1 ; 
	for( int i = 2 ; i <= 100 ;i ++ ){
		for( int j = 1 ; j <= 9 ; j ++ ){
			f[ i ][ j ] = 0 ; 
			for( int k = 0 ; k <= j; k ++ ) f[ i ][ j ] = ( f[ i ][ j ] % mod + f[ i - 1 ][ k ] % mod ) % mod ;
		}
	} 
}

int main(){
	init();
	int t ; cin>> t ; 
	while( t -- ){
		int n ;  cin >> n ;
		ll sum = 0 ; 
		for( int j = 0 ; j <= 9 ;j ++ )sum = ( sum % mod + f[ n ][ j ] % mod ) % mod ; 
		cout << sum << endl;	
	}
	
	return 0; 
}