#include<bits/stdc++.h>
using namespace std ; 
#define ll long long


int main(){
	int t ; cin >> t; 
	while( t-- ){
		stack<int> res, st ; 
		int n ; cin >> n; 
		int a[ n ]; 
		for( auto&x : a )cin >> x; 
		for( int i = n - 1 ; i >= 0 ; i -- ){
			while( !st.empty() && a[ i ] >= st.top() ){
				st.pop();
			}
			if ( !st.empty() )res.push( st.top() );
			else res.push( -1 );
			st.push( a[ i ] );
		}
		while( !res.empty() ){
			cout << res.top() << " "; 
			res.pop();
		}
		cout << endl;
	}
	
	return 0 ; 
}