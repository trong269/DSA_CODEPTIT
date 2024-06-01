#include<bits/stdc++.h>
using namespace std ; 
#define ll long long


int main(){
	int t ; cin >> t; 
	while( t -- ){
		int n ; cin >> n ; 
		int a[ n ] ; 
		for( auto &x : a ) cin >> x ; 
		int minx = 1e9 , maxx = -1e9 ; 
		for( auto x : a ){
			minx = min( minx , x ) ; 
			maxx = max ( maxx , x ) ; 
		}
		set<int> se( a , a + n ) ; 
		cout << ( maxx - minx + 1 ) - se.size() << endl;
	}
	return 0 ; 
}