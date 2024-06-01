#include<bits/stdc++.h>
using namespace std; 
#define ll long long


int main(){
	int t ; cin >> t ; 
	while( t-- ){
		int k ; cin >> k ; 
		string s ; cin >> s ; 
		map<char , ll> mp ; 
		for( auto x : s ) mp[ x ] ++ ; 
		priority_queue<ll> pq ; 
		for( auto x : mp )pq.push( x.second ) ; 
		while( k -- && !pq.empty() ){
			int tmp = pq.top() ; pq.pop();
			tmp -- ; 
			if ( tmp )pq.push( tmp );
		}
		ll sum = 0 ; 
		while( !pq.empty() ){
			ll tmp = pq.top();pq.pop();
			sum += tmp * tmp ; 
		}
		cout << sum << endl;
	}
	
	return 0 ; 
}