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
		while( true ){
			string tmp = q.front(); q.pop() ; 
			if ( tmp.size() > n ) break ; 
			v.push_back( tmp ) ;
			q.push( tmp + "6" );	
			q.push( tmp + "8" );
		}
		cout << v.size() << endl;
		for( auto x : v ) cout << x << " " ; 
		cout << endl;
	}
	
	return 0 ; 
}