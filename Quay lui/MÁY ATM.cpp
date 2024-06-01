#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
ll n , s , t[ 100 ];
ll minx = 1e9 ; 
void back( ll prev , ll sum , ll step ){
	for( int i = prev + 1 ; i <= n ; i ++ ){
		if( sum + t[ i ] <= s ){
			step ++ ;
			if ( sum + t[ i ] == s ){
				minx = min( minx , step ); 
			}
			else if ( step < minx ) back( i , sum + t[ i ] , step ); 
			step -- ; 
		}
	}
}

int main(){
	int k ; cin >> k ; 
	while( k-- ){
		cin >> n >> s ; 
		for( int i = 1 ; i <= n ; i ++ )cin >> t[ i ]; 
		sort( t + 1 , t + n + 1 , greater<int>());
		back( 0 , 0 , 0 ); 
		if( minx == 1e9 ){
			cout << "-1\n";
		}
		else cout << minx << endl;
		minx = 1e9 ;
	}
	
}