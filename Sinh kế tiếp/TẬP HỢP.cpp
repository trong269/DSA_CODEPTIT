#include<bits/stdc++.h>
using namespace std ; 
#define ll long long

bool check( int x[ ] , int k , int s ){
	int sum = 0 ; 
	for( int i = 1 ; i <= k ; i ++ )sum += x[ i ] ; 
	return sum == s ; 
}


int main(){
	while( 1 ){
		int cnt = 0 ; 
		int n , k , s ; cin >> n >> k >> s ; 
		if ( n == 0 and k == 0 and s == 0 )break ; 
		if ( n >= k ){
			int x[ k + 1 ] ; 
			for( int i = 1 ; i <= k ; i ++ )x[ i ] = i ; 
			if ( check( x , k , s ) )cnt ++ ;  
			while( 1 ){
				int i = k ;
				while( x[ i ] == n - k + i and i > 0 )i -- ; 
				if ( i > 0 ){
					x[ i ] ++ ; 
					for( int j = i + 1 ; j <= k ; j ++ )x[ j ] = x[ i ] + j - i ; 
					if( check ( x , k , s ) ) cnt ++ ; 
				}
				else break ; 
			}
		}
		cout << cnt << endl; 
	}
	
	return 0 ; 
}