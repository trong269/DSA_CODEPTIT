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
		if ( binary_search( a , a + n , x ) ) cout << "1\n"; 
		else cout << "-1\n"; 
	}
	return 0 ; 
}