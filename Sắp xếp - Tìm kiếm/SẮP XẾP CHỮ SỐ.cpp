#include<bits/stdc++.h>
using namespace std ; 
#define ll long long


int main(){
	int t ; cin >> t; 
	while( t -- ){
		int n ; cin >> n ; 
		int a[ n ]; 
		for( auto &x : a ) cin >> x ; 
		set<int> se ; 
		for( auto x : a ){
			while( x ){
				se.insert( x % 10 ) ; 
				x /= 10 ; 
			}
		}
		for( auto x : se ) cout << x << " " ; 
		cout << endl;
	}
	
	return 0 ; 
}