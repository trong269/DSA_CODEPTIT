#include<bits/stdc++.h>
using namespace std ; 
#define ll long long


int main(){
	int t ; cin >> t ; 
	while( t-- ){
		string s ; cin >> s; 
		int maxx = 0 ; 
		stack<char> st ; 
		for( auto x : s ){
			if ( x == '(' ){
				st.push( x ) ; 
			}
			else{
				if ( !st.empty()){
					st.pop();
					maxx += 2 ; 
				}
			} 
		}
		cout << maxx << endl;
	}
	
	return 0 ; 
}