#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 

string process( string s ){
	string tmp ; 
	stack<char> st;
	char op = '+';
	for( int i = 0 ; i < s.size() ; i ++ ){
		if( s[ i ] == '('){
			if( !st.empty() ){
				op = st.top();
				st.pop();
			}
		}
		else if ( s[ i ] == ')' ){
			op = '+';
		}
		else if ( isalpha( s[ i ] ) ){
			tmp.push_back( s[ i ] );	
		}
		else {
			if ( op == '-'){
				if ( s[ i ] == '+' )s[ i ] = '-';
				else s[ i ] = '+';
			}
			tmp.push_back( s[ i ] );
			st.push( s[ i ] );
		}
	}
	return tmp ; 
}

int main(){
	int t ; cin >> t ; 
	while( t-- ){
		string s1 , s2 ; cin >> s1 >> s2 ; 
		if( process( s1 ) == process( s2 ) )cout << "YES\n";
		else cout << "NO\n"; 
	}
	return 0 ; 
}
