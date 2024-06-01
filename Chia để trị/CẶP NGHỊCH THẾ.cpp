#include<bits/stdc++.h>
using namespace std ; 
#define ll long long

ll cnt = 0 ; 

void merge( ll a[], int l , int r ){
	int m = ( l + r ) / 2 ; 
	vector<int> v ; 
	int i = l , j = m + 1 ; 
	while( i <= m and j <= r ){
		if ( a[ i ] <= a[ j ] ){
			v.push_back( a[ i ] ) ; 
			i ++ ; 
		}
		else {
			cnt += m - i + 1; 
			v.push_back( a[ j ] ) ; 
			j ++ ; 
		}
	}
	while( i <= m ){
		v.push_back( a[ i ] ) ; 
		i ++ ; 
	}
	while( j <= r ){
		v.push_back( a[ j ] ) ;
		j ++ ; 
	}
	for( int i = 0 ; i < v.size() ; i ++ )a[ l + i ] = v[ i ] ; 
}

void merge_sort( ll a[ ] ,int l , int r ){
	if ( l == r )return ; 
	int m = ( l + r ) / 2 ; 
	merge_sort( a , l , m ); 
	merge_sort( a , m + 1 , r ) ; 
	merge( a , l , r ) ; 
}

int main(){
	int t ; cin >> t ; 
	while( t -- ){
		cnt = 0 ; 
		int n; cin >> n ; 
		ll a[ n ] ; 
		for( auto &x :a ) cin >> x ;
		merge_sort( a , 0 , n - 1 ) ; 
		cout << cnt << endl;
	}
	
	return 0  ; 
}