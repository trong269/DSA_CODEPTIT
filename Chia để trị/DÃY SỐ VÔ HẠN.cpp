#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
ll mod = 1e9 + 7;

class matran{
	public:
		ll a[ 2 ][ 2 ] ; 
	public:
		void init(){
			a[ 0 ][ 0 ] = 1 , a[ 0 ][ 1 ] = 1 ,a[ 1 ][ 0 ] = 1 , a[ 1 ][ 1 ] = 0 ;  
		}
		matran operator * ( matran other ){
			matran res ; 
			for( int i = 0 ; i < 2 ; i ++ ){
				for( int j = 0 ; j < 2 ; j ++ ){
					res.a[ i ][ j ] = 0 ; 
					for( int k = 0 ; k < 2 ; k ++ ){
						ll tmp = ( a[ i ][ k ] % mod * other.a[ k ][ j ] % mod ) % mod ; 
						res.a[ i ][ j ] = ( res.a[ i ][ j ] % mod + tmp % mod ) % mod ; 
					}
				}
			}
			return res ; 
		}
};

matran mu( matran a , ll b ){
	if ( b == 1 )return a ; 
	matran x = mu( a , b / 2 ); 
	if ( b % 2 == 0 )return x * x ; 
	return a * x * x ; 
}
ll fibo( ll n ){
	matran a ; 
	a.init() ; 
	matran x = mu( a , n ) ; 
	return x.a[ 0 ][ 1 ]; 
}

int main(){
	int t ; cin >> t ; 
	while( t-- ){
		int n ; cin >> n ; 
		cout << fibo( n ) << endl;
	}
	
	return 0 ; 
}