#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 



int main(){
	int t ; cin >> t ; 
	while( t -- ){
		int n , s ; cin >> n >> s ; 
		int a[ n ]; 
		for( auto &x : a )cin >> x ;
		bool f[ s + 1 ] = {false};
		f[ 0 ] = true ;   
		for( int i = 0 ; i < n ; i ++ ){
			for( int t = s ; t >= a[ i ] ; t -- ){
				if ( f[ t - a[ i ] ] )f[ t ] = true ; 
			}
		}
		if ( f[ s ] )cout << "YES\n";
		else cout << "NO\n";
	}
	return 0 ; 
}