#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 


int main(){
	int t ; cin >> t; 
	while( t-- ){
		int k ; cin >> k ; 
		string s; 
		cin >> s; 
		map<char,int> mp ; 
		for( auto x : s )mp[ x ] ++ ; 
		priority_queue<int> pq ; 
		for( auto x : mp )pq.push( x.second ); 
		while( k --  and !pq.empty() ){
			int tmp = pq.top() ; pq.pop();
			if( tmp - 1 != 0 )pq.push( tmp - 1 ); 
		}
		ll sum = 0 ; 
		while( !pq.empty() ){
			int tmp = pq.top(); pq.pop();
			sum += 1ll * tmp * tmp ; 
		}
		cout << sum << endl;
	}
	
	return 0 ; 
}