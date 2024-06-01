#include<bits/stdc++.h>
using namespace std ; 
#define ll long long

int calc( int a , int b , char c ){
	if ( c == '+' ) return a + b ;
	if ( c == '-' ) return a - b ;
	if ( c == '*' ) return a * b ;
	if ( c == '/' ) return a / b ;
}

int main(){
	int t; cin >> t; 
	while( t-- ){
		string s ; cin >> s; 
		stack <int> st ; 
		for( int i = 0 ; i < s.size() ; i ++ ){
			if ( isdigit(s[ i ]))st.push( s[ i ] - '0' );
			else {
				int top1 = st.top() ; st.pop() ;
				int top2 = st.top() ; st.pop() ;
				st.push( calc( top2 , top1 , s[ i ] ) );
			}
		}
		cout << st.top() << endl ;
	}
	return 0 ; 
}
