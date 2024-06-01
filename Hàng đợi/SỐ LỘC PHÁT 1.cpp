#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 


int main(){
	int t ; cin >> t; 
	while( t-- ){ 
		int n ; cin >> n ; 
		vector<string> v ; 
		queue<string> q ; 
		q.push( "6" );
		q.push( "8" );
		while( q.front().size() <= n ){
			string tmp = q.front(); q.pop() ; 
			v.push_back( tmp ) ;
			q.push( tmp + "6" );	
			q.push( tmp + "8" );
		}
		for( int i = v.size() - 1 ; i >= 0 ; i -- ) cout << v[ i ] << " " ; 
		cout << endl;
	}
	
	return 0 ; 
}