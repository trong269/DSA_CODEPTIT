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
			char tmp = abs ( ( s1[ i ] - '0' ) - ( s1[ i - 1 ] - '0' ) ) + '0'; 
			s2.push_back( tmp ); 
		}
		cout << s2 << endl;
	}
	
	return 0 ; 
}
// chuyển từ mã np -> gray
// gray[ 1 ] = np[ 1 ] , gray[ i ]  = abs ( np[ i ] - np[ i - 1 ] )