#include<bits/stdc++.h>
using namespace std ; 
#define ll long long ; 

int res[ 1000005 ]; 
int main(){
	int t ; cin >> t; 
	while( t-- ){
		int n ; cin >> n ; 
		int a[ n ] ; 
		for( auto &x : a )cin >> x; 
		map<int,int> cnt ; 
		for( auto x : a ) cnt[ x ] ++ ; 
		
		stack<int> st ; 
		for( int i = n - 1 ; i >= 0 ; i -- ){
			if ( i == n - 1 ){
				res[ i ] = -1 ; 
			}
			else {
				while( !st.empty() and cnt[ a[ st.top() ] ] <= cnt[ a[ i ] ] ){
					st.pop();
				}
				if ( st.empty() ){
					res[ i ] = -1 ; 
				}
				else res[ i ] = st.top();
			}
			st.push( i ) ; 
		}
		for( int i = 0 ; i < n ; i ++ ){
			if ( res[ i ] != -1 ){
				cout << a[ res[ i ] ] << " "; 
			}
			else cout << -1 << " "; 
		}
		cout << endl;
	}
	
	return 0 ; 
}