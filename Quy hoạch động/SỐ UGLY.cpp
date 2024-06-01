#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 
ll mod = 1e9 + 7 ; 

ll ugly[ 10005 ]; 
void init(){
	ugly[ 1 ] = 1 ; 
	int i2 = 1 , i3 = 1 , i5 = 1 ; 
	for( int i = 2 ; i <= 10000 ; i ++ ){
		ugly[ i ] = min( { ugly[ i2 ] * 2 , ugly[ i3 ] * 3 , ugly[ i5 ] * 5 } );
		if ( ugly[ i ] == ugly[ i2 ] * 2 ) i2 ++ ; 
		if ( ugly[ i ] == ugly[ i3 ] * 3 ) i3 ++ ; 
		if ( ugly[ i ] == ugly[ i5 ] * 5 ) i5 ++ ;
	}
}


int main(){
	init();
	int t ; cin >> t;
	while( t-- ){
		int n ; cin >> n ; 
		cout << ugly[ n ] << endl;
	}
	return 0 ; 
}