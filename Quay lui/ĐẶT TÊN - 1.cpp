#include<bits/stdc++.h>
using namespace std ; 
#define ll long long

void display( vector<string> v , int x[ ] , int k ){
	for( int i = 1 ; i <= k ; i ++ ){
		cout << v[ x[ i ] ] << " " ; 
	}
	cout << endl;
}
bool check( int x[] , int n , int k ){
	for( int i = 1 ; i <= k ; i ++ )if ( x[ i ] != n - k + i )return false ; 
	return true ; 
}
int main(){
	int n , k ; cin >> n >> k ; 
	set<string> se ; 
	for( int i = 0 ; i < n ; i ++ ){
		string x ; cin >> x ; 
		se.insert( x ) ; 
	}
	n = se.size() ; 
	vector<string> v ; 
	v.push_back("-1" ); 
	for( auto x : se )v.push_back( x ); 
	int x[ k + 1 ]; 
	for( int i = 1 ; i <= k ;i ++ )x[ i ] = i ; 
	display( v , x , k ) ; 
	while( 1 ){
		int i = k ; 
		while( x[ i ] == n - k + i && i > 0 )i -- ; 
		x[ i ] += 1 ; 
		for( int j = i + 1 ; j <= k ; j ++ )x[ j ] = x[ i ] + j - i ; 
		display( v , x , k ) ; 
		if ( check( x , n , k ) )break ; 
	}
	return 0 ; 
}