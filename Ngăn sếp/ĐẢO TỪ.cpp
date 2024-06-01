#include<bits/stdc++.h>
using namespace std ; 
#define ll long long

int main(){
	int t ; cin >> t ; 
	cin.ignore();
	while( t-- ){
		string s ; getline( cin , s ); 
		stack<string> st ; 
		stringstream ss( s ); 
		string tmp ; 
		while( ss >> tmp ){
			st.push( tmp ); 
		}
		while( !st.empty() ){
			cout << st.top() << " " ; 
			st.pop(); 
		}
		cout << endl;
	}
	
	return 0 ; 
}
//2
//I like this program very much
//much very program this like I