#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
int f[ 1000001 ] = {0} ; 
void sang ( ){
	for( auto &x : f ) x = 1 ; 
	f[ 0 ] = f[ 1 ] = 0 ; 
	for( int i = 2 ; i <= sqrt( 1000000 ) ; i ++ ){
		if ( f[ i ] ){
			for( int j = i * i ; j <= 1000000 ; j += i ){
				f[ j ] = 0 ; 
			}
		}
	}
}


int main(){
	sang(); 
	vector<int> v ; 
	for( int i = 0 ; i <= 1000000 ; i ++ ){
		if ( f[ i ] ){
			v.push_back( i ) ; 
		}
	} 
	int t ; cin >> t; 
	while( t -- ){
		int n ; cin >> n ; 
		map<int,int> mp ; 
		int ok = 0 ; 
		for( auto x : v ) mp[ x ] = 1 ; 
		for( auto x : v ){
			if( mp[ n - x ] == 1 ){
				ok = 1 ; 
				cout << x << " " << n - x ; 
				break ; 
			}
		} 
		if ( !ok )cout << "-1";
		cout << endl; 
	}
	return 0 ; 
}