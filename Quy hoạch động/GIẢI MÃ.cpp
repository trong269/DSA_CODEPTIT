#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t ; cin>> t ; 
	while( t-- ){
		string s ; cin >> s; 
		if ( s[ 0 ] == '0' ){ // so 0 khong ma hoa duoc 
			cout << 0 << endl; 
			continue ; 
		}
		s = "@" + s ; 
		int n = s.size() - 1 ; 
		int f[ 100 ]; 
		f[ 0 ] = 1 ; 
		f[ 1 ] = 1 ; 
		for( int i = 2 ; i <= n; i ++ ){
			f[ i ] = 0 ; 
			if ( s[ i ] != '0' )f[ i ] += f[ i - 1 ]; // s[i] co the dung doc lap 
			if ( s[ i - 1 ] == '1' || ( s[ i - 1 ] == '2' && s[ i ] <= '6' ) )f[ i ] += f[ i - 2 ] ; // ghep duoc voi ky tu phia truoc no
		}
		cout << f[ n ] << endl;
	}
	
	return 0 ; 
}