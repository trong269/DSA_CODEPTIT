#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
ll mod = 1e9 + 7;

void convert( ll a , ll k ){
	if ( a == 0 ) return ;
	convert( a / k , k ) ; 
	cout << a % k ; 
}
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
		ll k ; cin >> k ; 
		string a , b ; cin >> a >> b ; 
		convert( convert_10( a , k ) + convert_10( b, k ) , k ) ; 
		cout << endl;
	}
	
	
	return 0 ; 
}