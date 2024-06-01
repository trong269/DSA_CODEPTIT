#include<bits/stdc++.h>
using namespace std; 

int dem0( int a[], int n ){
	int l = 0 , r = n - 1 , cnt = 0 ; 
	while( l <= r ){
		int mid = ( l + r ) / 2 ; 
		if ( a[ mid ] == 0 ){
			cnt = mid + 1  ;
			l = mid + 1 ; 
		}
		else r = mid - 1 ; 
	}
	return cnt ; 
}

int main(){
	int t ; cin >> t ; 
	while( t -- ){
		int n ; cin >> n ; 
		int a[ n ]; 
		for( auto &x : a ) cin >> x ; 
		cout << dem0( a , n ) << endl;
	}
	
	return 0 ; 
}