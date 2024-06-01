#include<bits/stdc++.h>
using namespace std ; 
#define ll long long

int main(){
	int t ; cin >> t ; 
	while( t -- ){
		int n ; cin >> n ; 
		int a[ n ]; 
		vector<string> v ; 
		for( auto &x : a )cin >> x ; 
		int cnt = 0 ; 
		for( int i = 0 ; i < n ; i ++ ){
			bool ok = false ;
			for( int j = i + 1 ; j < n ; j ++ ){
				if ( a[ j ] < a[ i ] ){
					swap( a[ i ] , a[ j ] ); 
					ok = true ;
				}
			}
			if ( ok ){
				cnt ++ ;
				string s = "Buoc ";
				s += to_string ( cnt ) ; 
				s += ": "; 
				for( int j = 0 ; j < n; j ++ )s += to_string ( a[ j ] ) + " " ; 
				v.push_back( s ) ; 
			}
		}
		for( int i = v.size() - 1; i >= 0 ; i -- )cout << v[ i ] << endl;
	}
	return 0 ; 
}