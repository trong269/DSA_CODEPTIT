#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
ll mod = 1e9 + 7;

ll convert_10 ( string a , ll k ){
	reverse( a.begin() , a.end() ) ; 
	ll res = 0 ; 
	for( int i = 0 ; i < a.size() ; i ++ ){
		res += ( a[ i ] - '0' ) * pow( k , i ) ; 
	}
	return res ; 
}

int main(){
	int t ; cin >> t ; 
	while( t -- ){
		string s1 , s2 ; cin >> s1 >> s2 ; 
		cout << convert_10 ( s1, 2 ) * convert_10 ( s2 , 2 ) << endl;
	}
	
	return 0; 
}