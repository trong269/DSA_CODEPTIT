#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 

void display( int x [] , int n ){
	string s = "(";
	for( int i = 1 ; i <= n ; i ++ ) s += to_string ( x[ i ] ) + " " ;
	s.pop_back(); 
	s.push_back( ')'); 
	cout << s << " " ;  
}

int main(){
	int t ; cin >> t ; 
	while( t -- ){
		int n ; cin >> n ; 
		int x[ 100 ] ; 
		for( auto &y : x ) y = 0 ; 
		int cnt = 1 ; 
		x[ 1 ] = n ;  
		display( x , cnt ) ; 
		while( 1 ){
			int i = cnt  ; 
			while( x[ i ] == 1 and i > 0 ){
				i -- ; 
			} 
			if ( i > 0 ){
				x[ i ] = x[ i ] - 1 ; 
				int sum = cnt - i  + 1 ; 
				cnt = i ; 
				int a = sum / x[ i ] , b = sum % x[ i ] ; 
				int j = i + 1 ; 
				while( a ){
					x[ j ] = x[ i ] ; 
					j ++ ; 
					cnt ++ ; 
					a -- ;  
				}
				if ( b ){
					x[ j ] = b ; 
					j ++ ;   
					cnt ++ ; 
				}
				display( x , cnt ) ; 
			}
			else break ; 
		}
		cout << endl;
	}
	
	return 0 ; 
}