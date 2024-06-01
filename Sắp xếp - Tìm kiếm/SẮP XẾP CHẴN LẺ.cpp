#include<bits/stdc++.h>
using namespace std ; 
#define ll long long


int main(){
	int t ; t = 1 ; 
	while( t -- ){
		int n ; cin>> n ; 
		int a[ n ]; 
		for( auto &x : a )cin >> x ; 
		vector<int > chan , le; 
		for( int i = 0 ; i < n; i ++ ){
			if ( i % 2 == 0 )le.push_back( a[ i ] ); 
			else chan.push_back( a[ i ] ); 
		}
		sort( le.begin() , le.end() ); 
		sort( chan.begin() , chan.end() , greater<int>() ); 
		int i = 0 , j = 0 ; 
		for( int k = 0 ; k < n ; k ++ ){
			if ( k % 2 == 0 ){
				cout << le[ i ] << " " ; 
				i ++ ; 
			}
			else {
				cout << chan[ j ] << " " ;
				j ++ ; 
			} 
		}
		cout << endl;
		
	}
	return 0 ; 
}