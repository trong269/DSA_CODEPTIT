#include<bits/stdc++.h>
using namespace std ; 
#define ll long long


int main(){
	int t ; cin >> t; 
	while( t -- ){
		int n ; cin >> n; 
		int a[ n ] ; 
		for( auto &x : a ) cin >>x ; 
		sort( a , a + n ) ; 
		for( auto x : a ) cout << x << " " ; 
		cout << endl;
	}
	
	return 0 ; 
}