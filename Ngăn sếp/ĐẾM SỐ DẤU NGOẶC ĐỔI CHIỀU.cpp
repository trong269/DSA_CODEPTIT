#include<bits/stdc++.h>
using namespace std ; 
#define ll long long



int main(){
	int t ; cin >> t; 
    while( t-- ){
        string s ; cin >> s; 
        stack<char> st ;
        for( auto x : s ){
            if( x == '(' )st.push( x ); 
            else {
                if ( st.empty() == false and st.top() == '(')st.pop();
                else st.push( x ); 
            }
        }
        int cnt = 0 ; 
        while( !st.empty() ){
            char top1 = st.top() ; st.pop();
            char top2 = st.top() ; st.pop();
            if ( top1 == top2 ) cnt ++ ; 
            else cnt += 2 ; 
        }
        cout << cnt << endl ;
    }
	return 0 ; 
}