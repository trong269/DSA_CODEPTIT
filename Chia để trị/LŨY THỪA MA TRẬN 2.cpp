#include<bits/stdc++.h>
using namespace std ; 
#define ll long long

ll mod = 1e9 + 7;

class matran{
	public:
		ll n , k  ; 
		ll a[ 10 ][ 10 ] ; 
	public:
		friend istream& operator >> ( istream & cin , matran &x ){
			cin >> x.n >> x.k ; 
			for( int i = 0 ; i < x.n ; i ++ ){
				for( int j = 0 ; j < x.n ; j ++ )
					cin >> x.a[ i ][ j ] ; 
			}
			return cin ; 
		}
		matran operator * ( matran other ){
			matran res ; 
			res.n = n ; 
			for( int i = 0 ; i < n ; i ++ ){
				for( int j = 0 ; j < n ; j ++ ){
					res.a[ i ][ j ] = 0 ; 
					for( int k = 0 ; k < n ; k ++ ){
						ll tmp = ( a[ i ][ k ] % mod * other.a[ k ][ j ] % mod ) % mod ; 
						res.a[ i ][ j ] = ( res.a[ i ][ j ] % mod + tmp % mod ) % mod ;  
					}
				}
			}
			return res ; 
		}
};

matran mu( matran a , ll k ){
	if ( k == 1 )return a ; 
	matran x = mu( a , k / 2 ); 
	if( k % 2 == 0 )return x * x ;
	return a * x * x ;  
}


int main(){
	int t ; cin >> t ; 
	while( t -- ){
		matran x ; cin >> x; 
		matran y = mu( x , x.k ) ; 
		ll sum = 0 ; 
		for( int i = 0 ; i < y.n ; i ++ ){
			sum = ( sum % mod + y.a[ i ][ y.n - 1 ] % mod ) % mod ; 
		}
		cout << sum << endl;
	}
	
	return 0 ; 
}