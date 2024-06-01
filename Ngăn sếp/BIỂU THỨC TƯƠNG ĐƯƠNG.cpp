#include<bits/stdc++.h>
using namespace std ; 
#define ll long long ; 


int main(){
	int t; cin >> t; 
	while( t-- ){
		string s; cin >> s; 
		stack<string> st ; 
		for( int i = s.size() - 1; i >= 0 ; i -- ){
			if ( s[ i ] == ')' or isalpha( s[ i ] ) ){
				st.push( string(1 , s[ i ]));
			}
			else if (s[ i ] == '(') {
				string tmp ; 
				while( !st.empty() and st.top() != ")"){
					tmp += st.top(); 
					st.pop(); 
				}
				if ( st.empty() == false ) st.pop(); // xoa ')'
				st.push( tmp ) ; 
			}
			else {
				if ( s[ i ] == '+'){
					st.push( string( 1 , s[ i ]));
				}
				else {
					string top = st.top(); st.pop();
					for( auto &x : top ){
						if ( x == '+' ) x = '-'; 
						else if ( x == '-' ) x = '+' ; 
					}
					st.push( top ) ; 
					st.push( string( 1 , s[ i ])); 
				}
			}
		}
		string res ; 
		while( !st.empty()){
			res += st.top();
			st.pop();
		}
		cout << res  << endl;
	}
	
	return 0 ; 
}