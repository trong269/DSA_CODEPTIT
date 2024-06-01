#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
int n , k; 
int a[ 100 ] ; 
int x[ 100 ]; 

void in(){
	for( int i = 1 ; i <= k ; i ++ )cout << a[ x[ i ] ] << " " ; 
	cout << endl;
}

void back( int i ){
	for( int j = x[ i - 1 ] + 1 ; j <= n - k + i ; j ++ ){
		x[ i ] = j ; 
		if ( i == k ){
			in(); 
		}
		else back( i + 1 ) ; 
	}
}

int main(){
	int t ; cin >> t; 
	while( t -- ){
		cin >> n >> k ; 
		for( int i = 1 ; i <= n ; i ++ )cin >> a[ i ]; 
		sort( a + 1 , a + n + 1 ) ; 
		back( 1 ) ; 
	}
	
	return 0 ; 
}