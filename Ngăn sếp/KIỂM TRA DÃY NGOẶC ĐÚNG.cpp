#include<bits/stdc++.h>
using namespace std ; 
#define ll long long

bool check( string s ){
	stack<char> st ;
	for( auto x : s ){
		if ( x == '(' or x == '[' or x == '{' ){
			st.push(x) ;
		}
		else {
			if ( st.empty() ) return false ;
			if( x == ')' and st.top() != '(' )return false ; 
			if ( x == ']' and st.top() != '[' ) return false ;
			if ( x == '}' and st.top() != '{' ) return false ;
			st.pop() ;
		}
	}
	return st.empty() ;
}

int main(){
	int t ; cin >> t; 
	while( t-- ){
		string s ; cin >> s ; 
		if ( check( s ) )cout << "YES" << endl ; 
		else cout << "NO" << endl ;
	}
	return 0 ; 
}
