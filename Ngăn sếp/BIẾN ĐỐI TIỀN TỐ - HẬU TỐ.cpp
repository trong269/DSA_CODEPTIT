#include<bits/stdc++.h>
using namespace std ; 
#define ll long long



int main(){
	int t ; cin >> t; 
	while( t-- ){
		string s ; cin >> s ; 
		stack<string> st ; 
		for( int i =  s.size() - 1 ; i >= 0 ; i-- ){
			if ( isalpha( s[ i ] ) )st.push( string( 1 , s[ i ] ));
			else {
				string top1 = st.top() ; st.pop() ;
				string top2 = st.top() ; st.pop() ;
				st.push( top1 + top2 + string( 1 , s[ i ] ) );
			}
		}
		cout << st.top() << endl ;
	}
	return 0 ; 
}
