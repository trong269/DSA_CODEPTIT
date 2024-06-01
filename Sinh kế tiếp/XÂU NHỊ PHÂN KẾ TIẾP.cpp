#include<bits/stdc++.h>
using namespace std ; 
#define ll long long


int main(){
	int t ; cin >> t ; 
	while( t -- ){
		string s ; cin >> s ; 
		vector<int> x; 
		x.push_back( -1 );
		for( int i = 0 ; i < s.size() ; i ++ ){
			x.push_back( s[ i ] - '0' );
		} 
		int i = x.size() - 1;
		while( x[ i ] == 1 ){
			x[ i ] = 1 - x[ i ] ; 
			i -- ; 
		}
		x[ i ] = 1 - x[ i ] ; 
		for( int j = 1 ; j < x.size() ; j ++ )cout << x[ j ]; 
		cout << endl;
	}
}