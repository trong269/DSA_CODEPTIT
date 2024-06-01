#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 

vector<ll> v ; 
void init(){
	queue<string> q ; 
	q.push( "1" ) ;
	while( 1 ){
		string tmp = q.front(); q.pop() ; 
		v.push_back( stoll( tmp ) );
		if ( stoll( tmp ) > 1e18 )break ; 
		q.push( tmp + "0" );
		q.push( tmp + "1" ); 
	}
}

int main(){
	init();
	int t ; cin >> t ; 
	while( t-- ){
		ll n ; cin >> n ; 
		int cnt = upper_bound( v.begin() , v.end() , n ) - v.begin() ;
		cout << cnt << endl;
	}
	
	return 0 ; 
}