#include<bits/stdc++.h>
using namespace std ; 
#define ll long long


int main(){
	int t ; cin >> t ; 
	while( t -- ){
		int n , k ; cin >> n >> k ; 
		int a[ n ]; 
		for( auto &x : a )cin >> x ; 
		map<int,int> mp ; 
		for( int i = 0 ; i < k ; i ++ )mp[ a[ i ] ]++ ; 
		cout << (*mp.rbegin() ).first << " " ; 
		for( int i = k ; i < n ; i ++ ){
			mp[ a[ i - k ] ] -- ; 
			if ( mp[ a[ i - k ] ] == 0 )mp.erase( a[ i - k ] ); 
			mp[ a[ i ] ] ++ ; 
			cout << (*mp.rbegin() ).first << " " ; 
		}
		cout << endl;
	}
	
	return 0 ; 
}