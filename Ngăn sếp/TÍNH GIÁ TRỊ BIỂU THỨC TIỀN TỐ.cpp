#include<bits/stdc++.h>
using namespace std ; 
#define ll long long

int caculate( int a , int b , char c ){
	if ( c == '+' ){
		return a + b ; 
	}
	else if ( c == '-'){
		return a - b ; 
	}
	else if ( c == '*'){
		return a * b ; 
	}
	else return a / b ; 
}

int main(){
	int t ; cin >> t; 
	while( t-- ){
		string s ; cin >> s; 
		stack<int> st ; 
		for( int i = s.size() - 1 ; i >= 0 ; i -- ){
			if ( isdigit(s[ i ]) ){
				st.push( s[ i ] - '0' );
			}
			else {
				int tmp1 = st.top(); st.pop();
				int tmp2 = st.top(); st.pop();
				st.push( caculate( tmp1 , tmp2 , s[ i ] ) );
			}
		}
		cout << st.top() << endl;
	}
	
	return 0 ; 
}