#include<bits/stdc++.h>
using namespace std ; 
#define ll long long

int main(){
	int t ; cin >> t ; 
	while( t -- ){
		int n , m ; cin >> n >> m ; 
		vector<int> ke[n+1];
		while( m -- ){
			int u , v ; cin >> u >> v ; 
			ke[u].push_back(v);
		}
		for( int i = 1; i <= n ; i ++  ){
			cout << i << ": ";
			for( auto v : ke[ i ] ){
				cout << v << " " ; 
			}
			cout << endl;
		}
	}
	
	return 0 ; 
}