#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 


int a[ 1005 ][ 1005 ] ; 
int main(){
	int n ; cin >> n ; 
	for( int i = 1 ; i <= n ; i ++ ){
		for( int j = 1 ; j <= n ; j ++ ){
			cin >> a[ i ][ j ] ; 
			if ( a[ i ][ j ] ) cout << j << " " ; 
		}
		cout << endl;
	}
	
	return 0 ; 
}