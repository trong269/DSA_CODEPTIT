#include<bits/stdc++.h>
using namespace std ; 
#define ll long long


int main(){
	int t ; cin >> t; 
	while( t-- ){
		string s ; cin >> s; 
		s.push_back( 'I' );
		stack<int> st ; 
		st.push(-1);
		int maxx = 0 ; 
		for( int i = 0 ; i < s.size() ; i ++ ){
			if(s[ i ] == 'I' ) {
				int cnt = i - st.top() ;
				st.pop();
				st.push( i ) ; 
				maxx = maxx + cnt ; 
				for( int i = maxx ; i > maxx - cnt ; i -- )cout << i ; 	
			}
		}
		cout << endl;
	}
	
	return 0 ; 
}