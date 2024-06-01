#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 

int binary( int a[ ] , int n , int k ){
	int l = 0 , r = n - 1 , res = -1 ; 
	while( l <= r ){
		int m = ( l + r ) / 2 ; 
		if ( a[ m ] == k ){
			res = m + 1 ; 
			return res ;  
		}
		else if ( a[ m ] > k ) r = m - 1 ; 
		else l = m + 1 ; 
	}
	return res ; 
}


int main(){
	int t ; cin >> t ; 
	while( t -- ){
		int n , k ; cin >> n >> k ; 
		int a[ n ]; 
		for( auto &x : a ) cin >> x ; 
		int vt = binary( a , n , k ) ; 
		if( vt == -1 )cout << "NO\n";
		else cout << vt << endl;
	}
	
	return 0 ; 
}