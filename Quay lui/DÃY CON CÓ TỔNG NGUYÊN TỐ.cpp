#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
int n; 
int a[ 100 ] ; 
vector<vector<int>> res ; 
vector<int> v ; 
bool nt ( int n ){
	for( int i = 2 ; i <= sqrt( n ) ; i ++ ){
		if ( n % i == 0 )return false ; 
	}
	return n > 1 ; 
}

void back( int prev , int sum ){
	for( int i = prev + 1 ; i < n ; i ++ ){
		v.push_back( a[ i ] ); 
		if ( nt( sum + a[ i ] ) ){
			res.push_back( v ) ; 
		}
		back( i , sum + a[ i ] ); 
		v.pop_back( ) ; 
	}
}

int main(){
	int t ; cin >> t ; 
	while( t -- ){
		cin >> n ; 
		for( int i = 0 ; i < n ; i ++ )cin >> a[ i ] ; 
		sort( a , a + n , greater<int>() ); 
		back( -1 , 0 ) ; 
		sort( res.begin() , res.end() ) ; 
		for( auto x : res ){
			for( auto y : x )cout << y << " " ; 
			cout << endl;
		}
		res.clear(); 
	}
	
	return 0 ; 
}