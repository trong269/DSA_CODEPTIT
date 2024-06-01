#include<bits/stdc++.h>
using namespace std ; 
#define ll long long

void display( int x[ ] , vector<int> a , int k ){
	for( int i = 1 ; i <= k ; i ++ ) cout << a[ x[ i ] ] << " " ; 
	cout << "\n";
}
bool check( int x[] , int n , int k ){
	for( int i = 1 ; i <= k ; i ++ )if ( x[ i ] != n - k + i )return false ; 
	return true ; 
}
int main(){
	int t ; t = 1 ; 
	while( t -- ){
		int n , k ; cin >> n >> k ; 
		set<int> se ; 
		for( int i = 0 ; i < n ; i ++ ){
			int x ; cin >> x; 
			se.insert( x ); 
		} 
		n = se.size();
		vector<int> a ; 
		a.push_back( -1 ) ; 
		for( auto x : se )a.push_back( x ); 
		
		int x[ k + 1 ] ;
		for( int i = 1 ; i <= k ; i ++ )x[ i ] = i ; 
		display( x , a ,k ) ; 
		while( 1 ){
			int i = k ; 
			while( x[ i ] == n - k + i && i > 0 )i -- ; 
			x[ i ] += 1 ; 
			for( int j = i + 1 ; j <= k ; j ++ )x[ j ] = x[ i ] + j - i ; 
			display(x ,a, k );
			if ( check( x , n , k ) )break ; 
		}
	}
	
	return 0 ; 
}