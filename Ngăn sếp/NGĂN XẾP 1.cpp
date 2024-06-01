#include<bits/stdc++.h>
using namespace std ; 
#define ll long long

int main(){
	stack<int> st ; 
	vector<int> v ; 
	string s ; 
	while( cin >> s ){
		if ( s == "push"){
			int x ; cin >> x ; 
			st.push( x ); v.push_back( x );
		}
		else if ( s == "show" ){
			if ( v.empty() ){
				cout << "empty\n";
			}else {
				for( auto x : v )cout << x << " " ; 
				cout << endl;
			}
		}
		else {
			if ( st.empty() == false ){
				st.pop(); v.pop_back( ); 
			}
		}
	}
	
	return 0 ; 
}