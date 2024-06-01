#include<bits/stdc++.h>
using namespace std ; 
int n ; 
int a[ 100 ];

void display( int k ){
	string s = "["; 
	for( int i = 0 ; i < k ; i ++ )s += to_string( a[ i ] ) + " "; 
	s.pop_back(); 
	s += "]"; 
	cout << s << endl; 
}
void back( int k ){
	if( k == 0 )return ; 
	else {
		for( int i = 0 ; i < k ; i ++ )a[ i ] += a[ i + 1 ]; 
		display( k ); 
		back( k - 1 ); 
	}
}


int main(){
	int t ; cin >> t ; 
	while( t -- ){
		cin >> n ; 
		for( int i = 0 ; i < n ; i ++ )cin >> a[ i ] ; 
		display( n ); 
		back( n - 1 ); 
	}
	
	return 0 ; 
}