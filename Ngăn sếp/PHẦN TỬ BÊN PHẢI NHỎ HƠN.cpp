#include<bits/stdc++.h>
using namespace std ; 
#define ll long long

int main(){
	int t ; cin >> t; 
	while( t-- ){
		int n ; cin >> n ; 
		int a[ n ] ; 
		for( auto &x : a ) cin >> x;
		int maxx[ n ] , minx[ n ];
		stack<int> st1 , st2 ; 
		// vi tri phan tu dau tien lon hon ben phai
		for( int i = n - 1 ; i >= 0 ; i -- ){
			while( !st1.empty() && a[ st1.top() ] <= a[ i ] )st1.pop();
			if ( !st1.empty() ){
				maxx[ i ] = st1.top();
			}
			else {
				maxx[ i ] = -1 ; 
			}
			st1.push( i );
		} 
		// vi tri phan tu dau tien nho hon ben phai
		for( int i = n - 1; i >= 0 ; i -- ){
			while( !st2.empty() && a[ st2.top() ] >= a[ i ] )st2.pop();
			if ( !st2.empty()){
				minx[ i ] = st2.top();
			}
			else{
				minx[ i ] = -1 ; 
			}
			st2.push( i ) ; 
		}
		// in ra kq
		for( int i = 0 ; i < n ; i ++ ){
			if ( maxx[ i ] == -1 or minx[ maxx[ i ] ] == -1 )cout << -1 << " " ; 
			else {
				cout << a[minx[ maxx[ i ] ]]<< " " ; 
			}
		}
		cout << endl;
	}
	
	return 0 ; 
}