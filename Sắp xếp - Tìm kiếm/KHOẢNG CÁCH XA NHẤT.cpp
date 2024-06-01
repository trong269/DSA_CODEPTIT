#include<bits/stdc++.h>
using namespace std ; 
#define ll long long


int main(){
	int t ; cin >> t ; 
	while( t -- ){
		int n; cin >> n ; 
		int a[ n ]; 
		for( auto &x : a )cin >> x ;  
		vector<pair<int, int>> v ; 
		for( int i = 0 ; i < n ; i ++ ){
			v.push_back( { a[ i ] , i } ); 
		}
		sort( v.begin() , v.end() , [ ] ( pair<int,int> a , pair<int,int> b ) -> bool{
			if ( a.first != b.first )return a.first < b.first ; 
			return a.second < b.second ; 	
		});
		int maxx = -1 , vt = v[ 0 ].second ;
		 for( int i = 1 ; i < v.size() ; i ++ ){
		 	if ( v[ i ].first > a[ vt ] and v[ i ].second > vt  ){
		 		maxx = max( maxx , v[ i ].second - vt ) ; 
			}
			vt = min( vt , v[ i ].second ) ;
		}
		cout << maxx << endl;
	}
	
	return 0 ; 
}