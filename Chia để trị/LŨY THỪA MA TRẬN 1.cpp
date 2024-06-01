#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
ll mod = 1e9 + 7;

class matran{
	public:
		int n , k ; 
		int a[ 10 ][ 10 ] ; 
	public:
		friend istream& operator >> ( istream& cin, matran &x ){
			cin >> x.n >> x.k ; 
			for( int i = 0 ; i < x.n ; i ++ ){
				for( int j = 0 ; j < x.n ; j ++ ){
					cin >> x.a[ i ][ j ] ; 
				}
			}
			return cin ; 
		}
		friend ostream& operator << ( ostream & cout , matran x ){
			for( int i = 0 ; i < x.n ; i ++ ){
				for( int j = 0 ; j < x.n ; j ++ ){
					cout << x.a[ i ][ j ] << " " ;  
				}
				cout << endl;
			}
			return cout ; 
		}
		matran operator * ( matran other ){
			matran res ; 
			res.n = n ; 
			res.k = k ; 
			for( int i = 0 ; i < n ; i ++ ){
				for( int j = 0 ; j < n ; j ++ ){
					res.a [ i ][ j ] = 0 ; 
					for( int k = 0 ; k < n ; k ++ ){
						int tmp = ( a[ i ][ k ] % mod * other.a[ k ][ j ] % mod ) % mod ; 
						res.a[ i ][ j ] = ( res.a[ i ][ j ] % mod + tmp % mod ) % mod ;  
					}
				}
			}
			return res ; 
		}
};

matran mu( matran a , int b ){
	if ( b == 1 )return a ; 
	matran x = mu( a , b / 2 ) ; 
	if ( b % 2 == 0 )return x * x ; 
	return a * x * x ; 
}

int main(){
	int t ; cin >>t ; 
	while( t -- ){
		matran a ; cin >> a ; 
		cout << mu( a , a.k ) ; 
	}
	
	return 0 ; 
}