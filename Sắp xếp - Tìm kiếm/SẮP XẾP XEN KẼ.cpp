#include<bits/stdc++.h>
using namespace std ; 
#define ll long long


int main(){
	int t ; cin >> t ; 
	while( t -- ){
		int n ; cin >> n ; 
		int a[ n ] ; 
		for( auto &x : a ) cin >> x ; 
		sort( a , a + n ); 
		int l = 0 , r = n - 1 ; 
		for( int i = 0 ; i < n ; i ++ ){
			if ( i % 2 == 0){
				cout << a[ r ] << " "; 
				r -- ; 
			}
			else {
				cout << a[ l ] << " "; 
				l ++ ; 
			}
		}
		cout << endl;
	}
	
	return 0 ; 
}