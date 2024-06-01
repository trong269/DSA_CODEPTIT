#include<bits/stdc++.h>
using namespace std ;
#define ll long long

bool check(int x[] , int n , int k ){
	for( int i = 1 ; i <= k ; i ++ )if ( x[ i ] != n - k + i )return false ; 
	return true ; 
}
int count( int x[] , int y[] , int k ){

	int cnt = 0 ; 
	map<int,int> mp ; 
	for( int i = 1 ; i <= k ; i ++ ){
		mp[ x[ i ] ] = 1 ; 
	} 
	for( int i = 1 ; i <= k ; i ++ ){
		if ( mp[ y[ i ] ] == 1 )mp[ y[ i ] ] = 2 ; 
		else mp[ y[ i ] ] = 3 ; 
	}
	for( auto x : mp )if ( x.second == 3 )cnt ++ ; 
	return cnt ; 
}
int main(){
	int t ; cin >> t ; 
	while( t  -- ){
		int n , k ; cin >> n >> k ; 
		int x[ k + 1 ] , y[ k + 1 ] ; 
		for( int i = 1 ; i <= k ; i ++ ){
			cin >> x [ i ] ; 
			y[ i ] = x[ i ] ; 
		}
		bool ok = check( x , n , k ) ; 
		int i = k ; 
		while( x[ i ] == n - k + i && i > 0 )i -- ; 
		if ( i > 0 ){
			x[ i ] ++ ; 
			for( int j = i + 1 ; j <= k ; j ++ ){
				x[ j ] = x[ i ] + j - i ; 
			}
		}
		if ( ok )cout << k << endl;
		else cout << count( x , y , k ) << endl;		
	}
	
	return 0 ; 
}