#include<bits/stdc++.h>
using namespace std ; 
#define ll long long

int find( ll a[] , ll b[] , int l , int r ){
	int res = -1 ; 
	while( l <= r ){
		int mid = ( l + r ) / 2 ; 
		if ( a[ mid ] != b[ mid ] ){
			res = mid ; 
			r = mid - 1 ; 
		}
		else {
			l = mid + 1 ; 
		}
	}
	return res ; 
}

int main(){
	int t ; cin >> t ; 
	while( t -- ){
		int n ; cin >> n ; 
		ll a[ n ] , b[ n - 1 ]; 
		for( auto &x : a )cin >> x ; 
		for( auto &x : b )cin >> x ; 
		cout << find( a , b , 0 , n - 1 ) + 1 << endl;
	}
	
	return 0 ; 
}