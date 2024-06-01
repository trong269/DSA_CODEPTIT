#include<bits/stdc++.h>
using namespace std ; 
#define ll long long

map<char,int> mp ; 
void init(){
	mp[ '^' ] = 3 ; 
	mp[ '*' ] = 2 ; 
	mp[ '/' ] = 2 ;
	mp[ '+' ] = 1 ;
	mp[ '-' ] = 1 ;
}

int main(){
	init() ;
	int t ; cin >> t; 
	while( t-- ){
		string s ; cin >> s ; 
		stack<char> st ; 
		for( auto x : s ){
			if ( x == '(' ){
				st.push(x) ;
			}
			else if ( x == ')') {
				while( !st.empty() and st.top() != '(' ){
					cout << st.top() ;
					st.pop() ;
				}
				if ( !st.empty() ) st.pop() ;
			}
			else if ( isalpha( x ) ){
				cout << x ; 
			}
			else {
				while( !st.empty() and st.top() != '(' and mp[ st.top() ] >= mp[ x ] ){
					cout << st.top() ;
					st.pop() ;
				}
				st.push(x);
			}
		}
		while( !st.empty() ){
			cout << st.top() ; 
			st.pop() ; 
		}
		cout << endl ;
	}
	return 0 ; 
}
