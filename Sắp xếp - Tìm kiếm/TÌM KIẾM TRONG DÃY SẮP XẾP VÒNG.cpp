#include<bits/stdc++.h>
using namespace std ; 
#define ll long long

bool cmp ( pair<int,int> a , pair<int,int> b ){
	if ( a.second != b.second )return a.second > b.second ; 
	return a < b ; 
}

int main(){
	int t ; cin >> t; 
	while( t -- ){
		int n, x ; cin >> n >> x ; 
		int a[ n ] ; 
		for( auto &x : a ) cin >> x ; 
		for( int i = 0 ; i < n; i ++ ){
			if ( a[ i ] == x ){
				cout << i + 1 ; 
				break ; 
			}
		} 
		cout << endl;
	}
	return 0 ; 
}