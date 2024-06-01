#include<bits/stdc++.h>
using namespace std ; 
#define ll long long


int main(){
	int t ; cin >> t; 
	while( t-- ){
		string s ; cin >> s; 
		stack<string> st ; 
		for( int i = s.size() - 1 ; i >= 0 ; i -- ){
			if( s[ i ] == ']' or isalpha( s[ i ] ) ){
				st.push( string( 1 , s[ i ] ) );
			}
			else if ( s[ i ] == '[' ){
				string tmp ; 
				while( !st.empty() and st.top() != "]" ){
					tmp += st.top(); 
					st.pop(); 
				}
				if ( !st.empty( ) )st.pop() ; // xoa ']'
				st.push( tmp ) ; 
			}
			else{
				string num ; 
				while( i >= 0 and isdigit( s[ i ] ) ){
					num.push_back( s[ i ] ) ; 
					i -- ; 
				}
				i ++ ; 
				reverse( num.begin() , num.end() ); 
				string top = st.top(); st.pop(); 
				string tmp ; 
				for( int i = 0 ; i < stoi( num ) ; i ++ ){
					tmp += top ; 
				}
				st.push( tmp ) ; 
			}
		}
		while( !st.empty() ){
			cout << st.top(); 
			st.pop(); 
		}
		cout << endl;
	}
	return 0 ; 
}