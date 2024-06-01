#include<bits/stdc++.h>
using namespace std ; 
#define ll long long

ll across( int a[] , int l , int r , int m ){
	ll sum_left = 0 , sum_right = 0, max_left = -1e9 , max_right = -1e9 ; 
	for( int i = m ; i >= l ; i -- ){
		sum_left += a[ i ] ; 
		max_left = max( max_left , sum_left ) ; 
	}
	for( int i = m + 1 ; i <= r ; i ++ ){
		sum_right += a[ i ]; 
		max_right = max( max_right , sum_right ) ;
	}
	return max_left + max_right ; 
}


ll max_sum ( int a[ ] , int l ,int r  ){
	if ( l == r )return a[ l ] ; 
	int m = ( l + r ) / 2 ; 
	return max({ max_sum ( a , l , m ) , max_sum( a , m + 1 , r ) , across ( a , l , r , m )} );
}

int main(){
	int t ; cin >> t ; 
	while( t -- ){
		int n ; cin >> n ; 
		int a[ n ] ; 
		for( auto &x : a ) cin >> x; 
		cout << max_sum ( a , 0 , n - 1 ) << endl; 
	}
	
	return 0 ; 
}