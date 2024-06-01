#include<bits/stdc++.h>
using namespace std ; 
#define ll long long


int main(){
	int t ; cin >> t ; 
	while( t -- ){
		int n; cin >> n ; 
		int a[ n ] ; 
		for( auto &x : a ) cin >> x; 
		map<int,int> mp ; 
		for( auto x : a )mp[ x ] ++ ; 
		bool ok = false ; 
		for( auto x: a ){
			if ( mp[ x ] > 1 ){
				ok = true; 
				cout << x << endl;
				break ; 
			}
		}
		if( !ok )cout << "NO\n"; 
	}
	
	return 0 ; 
}