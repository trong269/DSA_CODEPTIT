#include<bits/stdc++.h>
using namespace std ; 
#define ll long long


int main(){
	int t ; cin >> t ; 
	while( t-- ){
		int n ; cin >> n ; 
		int h[ n ] ; 
		for( auto &x : h ) cin >> x; 
		int left[ n ] , right[ n ] ; 
		// ptu dau tien nho hon ben trai
		stack<int> st ;
		for( int i = 0 ; i < n ; i ++ ){
			if ( i == 0 )left[ i ] = -1 ; 
			else{
				while( !st.empty() and h[ st.top() ] >= h[ i ] ){
					st.pop() ; 
				}
				if ( st.empty())left[ i ] = -1 ; 
				else left[ i ] = st.top();
			}
			st.push( i ) ; 
		}
		// ptu dau tien nho hon ben phai
		stack<int> st1 ;
		for( int i = n - 1 ; i >= 0 ; i -- ){
			if ( i == n - 1 )right[ i ] = n ; 
			else{
				while( !st1.empty() and h[ st1.top() ] >= h[ i ] ){
					st1.pop() ; 
				}
				if ( st1.empty() )right[ i ] = n ; 
				else right[ i ] = st1.top();
			}
			st1.push( i ) ;
		}
		ll maxx = -1e9 ; 
		for( int i = 0 ; i < n ; i ++ ){
			maxx = max( maxx , 1ll * h[ i ] * ( right[ i ] - left[ i ] - 1 ) );
		}
		cout << maxx << endl ;
	}
	return 0 ; 
}
