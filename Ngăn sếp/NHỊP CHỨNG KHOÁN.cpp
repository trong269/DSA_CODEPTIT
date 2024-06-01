#include<bits/stdc++.h>
using namespace std ; 
#define ll long long


int main(){
	int t ; cin >> t ; 
	while( t -- ){
		int n ; cin >> n ; 
		int a[n ] ; 
		for( auto &x : a ) cin >> x ; 
		int left[ n ];
		stack<int> st ; 
		for( int i = 0 ; i < n ; i ++ ){
			if ( i == 0 )left[ i ] = -1 ; 
			else {
				while( !st.empty() and a[ st.top() ] <= a[ i ] ){
					st.pop(); 
				}
				if ( st.empty() )left[ i ] = -1 ; 
				else left[ i ] = st.top(); 
			}
			st.push( i ) ; 
		}
		for( int i = 0 ; i <n ; i ++ ){
			cout << i - left[ i ] << " " ; 
		}
		cout << endl;
	}
	return 0 ; 
}