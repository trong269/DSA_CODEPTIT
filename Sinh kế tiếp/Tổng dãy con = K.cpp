#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
ll n , k ; 
ll a[ 100 ] ; 
int x[ 100 ] ; 
int cnt = 0 ; 
bool check( ){
	ll sum = 0 ; 
	for( int i = 1 ; i <= n ; i ++ ){
		if ( x[ i ] ){
			sum += a[ i ] ; 
		}
	}
	return sum == k ; 
}
void display(){
	for( int i = 1 ; i <= n ; i ++ ){
		if ( x[ i ] ){
			cout << a[ i ] << " " ;  
		}
	}
	cout << endl;
}
void back( int i ){
	for( int j = 0 ; j <= 1 ; j ++ ){
		x[ i ] = j ; 
		if ( i == n ){
			if ( check() ){
				cnt ++ ; 
				display();
			}
		}
		else back( i + 1 );
	}
}

int main(){
	cin >> n >> k ; 
	for( int i = 1 ; i <= n ; i ++ )cin >> a[ i ];  
	back( 1 );
	cout << cnt ; 
	
}