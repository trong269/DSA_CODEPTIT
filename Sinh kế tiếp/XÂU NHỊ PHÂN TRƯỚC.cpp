#include<bits/stdc++.h>
using namespace std ;
#define ll long long

void display( vector<int> x , int n ){
	for( int i = 1 ; i <= n ; i ++ )cout << x[ i ]; 
	cout << endl;
}

bool check( vector<int> x , int n ){
	 for( int i = 1 ; i <= n ; i ++ ){
	 	 if ( x[ i ] != 0 )return false ; 
	 }
	 return true; 
}
int main(){
	int t ; cin >> t ; 
	while( t -- ){
		string s ; cin >> s ; 
		vector<int> x ; 
		x.push_back( -1 );
		for( auto c : s )x.push_back( c - '0' );
		int n = x.size() - 1 ; 
		bool ok = check( x , n );
		int i = n ; 
		while( x[ i ] == 0 && i > 0 ){
			x[ i ] = 1 - x[ i ] ; 
			i -- ; 
		}
		if ( i > 0 ){
			x[ i ] = 1 - x[ i ] ; 
		}
		if ( !ok ){
			display( x , n ) ; 
		}
		else {
			for( int i = 1 ; i <= n ; i ++ )cout << 1; 
		}
		cout << endl;
	}
	
	return 0 ; 
}