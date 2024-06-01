#include<bits/stdc++.h>
using namespace std ; 
#define ll long long



int main(){
	int t ; cin >> t; 
	while( t-- ){
		string s ; cin >> s ; 
		int cnt = 0 , ans = 0 ; 
		for( int i = 0 ; i < s.size() ; i ++ ){
			if ( s[ i ] == '[' )cnt ++ ; 
			else cnt -- ; 
			if ( cnt < 0 ){
				for( int j = i + 1 ; j < s.size() ; j ++ ){
					if( s[ j ] == '[' ){
						swap( s[ i ], s[ j ] ); 
						ans += j - i ; // so lan hoan doi 2 vtri ke nhau de dua [ tai j ve i 
						cnt = 1 ; // reset lai tai vtri i thi cnt = 1 => tai vtri i + 1 thi cnt = 0 
						break ; 
					}
				}
			}
		}
		cout << ans << endl;
	}
	return 0 ; 
}