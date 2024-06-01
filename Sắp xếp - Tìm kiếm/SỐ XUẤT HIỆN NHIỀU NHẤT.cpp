#include<bits/stdc++.h>
using namespace std ; 
#define ll long long


int main(){
	int t ; cin >> t ; 
	while( t -- ){
		int n ; cin >> n ; 
		int a[ n ] ; 
		for( auto &x : a ) cin >> x ; 
		map<int,int> mp ; 
		int val = -1, maxx = -1 ; 
		for( auto x : a  ){
			mp [ x ] ++ ; 
			if ( mp[ x ] > maxx ){
				val = x ; 
				maxx = mp[ x ] ; 
			}
		}
		if ( val != -1 && maxx > n / 2  )cout << val << endl;
		else cout << "NO\n";
	}
	
	return 0 ; 
}