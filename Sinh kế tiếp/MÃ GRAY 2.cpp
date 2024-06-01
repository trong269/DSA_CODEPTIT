#include<bits/stdc++.h>
using namespace std ; 
#define ll long long


int main(){
	int t ; cin >> t ; 
	while( t -- ){
		string s1 ; cin >> s1 ; 
		string s2 = ""; 
		s2.push_back( s1[ 0 ] ); 
		int n = s1.size(); 
		for ( int i = 1 ; i < n ; i ++ ){
			char tmp = ( ( s2[ i - 1 ] - '0' ) + ( s1[ i ] - '0' ) ) % 2 + '0';
			s2.push_back( tmp ); 
		}
		cout << s2 << endl;
	}
	
	
	return 0 ; 
}
// cách chuyển từ mã gray -> mã nhị phân
// np[ 1 ] = gray[ 1 ] , np[ i ] = ( np[ i - 1 ] + gray[ i ] ) % 2 với 2 <= i <= n.