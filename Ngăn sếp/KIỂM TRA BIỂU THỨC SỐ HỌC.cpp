#include<bits/stdc++.h>
using namespace std ; 
#define ll long long

bool check( string s ){
    stack<char> st ; 
    for( auto x : s ){
        if ( x != ')' and x != ' ' )st.push( x ) ; 
        else if ( x == ')' ){
            if ( st.empty() ) return true ;
            int cnt = 0 ; 
            while( st.empty() == false and st.top() != '(' ){
                cnt ++ ; 
                st.pop() ;
            }
            if ( st.empty() or cnt <= 1 ) return true ;
            st.pop() ;
        }
    }
    return false ;
}

int main(){
	int t ; cin >> t;
    cin.ignore() ; 
    while( t-- ){
        string s ; 
        getline( cin , s ) ;
        if ( check( s ) ) cout << "Yes\n"; 
        else cout << "No\n" ;
    }
	return 0 ; 
}