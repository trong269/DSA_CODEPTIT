#include<bits/stdc++.h>
using namespace std ; 
#define ll long long

// note: thong thuong khi x < y => x^y > y^x 
// chi co mot so it truong hop dac biet

map<ll,ll> mp ; 
int solve( ll b[] , ll m , ll x ){
	if ( x == 0 )return 0 ; 
	if ( x == 1 )return mp[ 0 ]; // chi co TH y = 0 thoa man
	ll ans = mp[ 0 ] + mp[ 1 ]; // y = 0 , 1 luon thoa man
	int idex = upper_bound( b , b + m , x ) - b ; 
	ans += ( m - idex ); 
	if( x == 2 ){// TH dac biet 
		ans -= mp[ 3 ]; // 2^3 < 3^3
		ans -= mp[ 4 ]; // 2^4 = 4^2
	}
	else if ( x == 3 ){ // TH dac biet 
		ans += mp[ 2 ]; // 3^2 > 2^3 
	}
	return ans ; 
}

int main(){
	int t ; cin >> t ; 
	while( t-- ){
		mp.clear();
		ll n , m ; cin >> n >> m ; 
		ll a[ n ], b[ m ]; 
		for(auto& x : a ) cin >> x; 
		for( auto& x : b ){
			 cin >> x ; 
			 mp[ x ] ++ ; 
		}
		ll ans = 0 ; 
		sort( b , b + m ); 
		for( auto x : a ){
		    // xet tung ptu x voi tat ca ptu trong mang b
			ans += solve( b , m , x );
		}
		cout << ans << endl;
	}
	
	return 0 ; 
}