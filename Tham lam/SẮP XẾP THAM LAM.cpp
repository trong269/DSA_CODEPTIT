#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
ll mod = 1e9 + 7 ;

bool check( int a[ ] , int b[ ] , int n ){
	for( int i = 0 ; i < n; i ++ ){
		if( a[ i ] != b[ i ] and a[ i ] != b[ n - 1 - i ] )return false ; 
	}
	return true ; 
}

int main(){
	int t ; cin >> t ; 
	while( t -- ){
		int n ; cin >> n ; 
		int a[ n ] , b [ n ]; 
		for( auto &x : a ) cin >> x ; 
		for( int i = 0 ; i < n ; i ++ )b[ i ] = a[ i ]; 
		sort( b, b + n ); 
		if( check ( a , b , n ) )cout << "Yes\n";
		else cout << "No\n";
	}
	
	return 0 ; 
}