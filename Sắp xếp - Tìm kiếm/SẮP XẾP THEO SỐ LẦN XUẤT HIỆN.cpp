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
		int n ; cin >> n ; 
		int a[ n ] ; 
		for( auto &x : a ) cin >> x ; 
		map<int,int> mp ; 
		for ( auto x : a ) mp [ x ] ++ ; 
		vector<pair<int,int>> v ; 
		for( auto x : mp ){
			for( int i = 0 ; i < x.second ; i ++ ){
				v.push_back( { x.first , x.second } );
			} 
		}
		sort( v.begin() , v.end() , cmp ) ; 
		for( auto x : v ) cout << x.first  << " " ; 
		cout << endl;
	}
	return 0 ; 
}