#include<bits/stdc++.h>
using namespace std ; 
#define ll long long


int main(){
	int t ; cin >> t; 
	while( t -- ){
		int n, k   ; cin >> n >> k ; 
		int a[ n ] ; 
		for( auto &x : a ) cin >> x ; 
		int cnt = 0 ; 
		for( auto x : a ) if ( x == k )cnt ++ ; 
		if ( cnt )cout << cnt << endl;
		else cout << "-1\n"; 
	}
	return 0 ; 
}