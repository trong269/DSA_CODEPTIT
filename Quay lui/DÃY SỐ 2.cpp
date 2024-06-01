#include<bits/stdc++.h>
using namespace std ; 
int n ; 
int a[ 100 ];
vector<string> v ; 
string display( int k ){
	string s = "["; 
	for( int i = 0 ; i < k ; i ++ )s += to_string( a[ i ] ) + " "; 
	s.pop_back(); 
	s += "]"; 
	return s ;  
}
void back( int k ){
	if( k == 0 )return ; 
	else {
		for( int i = 0 ; i < k ; i ++ )a[ i ] += a[ i + 1 ]; 
		v.push_back( display( k ) );
		back( k - 1 ); 
	}
}


int main(){
	int t ; cin >> t ; 
	while( t -- ){
		cin >> n ; 
		for( int i = 0 ; i < n ; i ++ )cin >> a[ i ] ; 
		v.push_back( display( n ) ); 
		back( n - 1  );
		for( int i = n - 1 ; i >= 0 ; i -- )cout << v[ i ] << " "; 
		cout << endl;
		v.clear(); 
	}
	
	return 0 ; 
}