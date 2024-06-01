#include<bits/stdc++.h>
using namespace std; 
#define ll long long

int main(){
	int t ; cin >>t ; 
	while( t -- ){
		int s , d ; cin >> s >> d ; 
		if ( s > 9 * d ){
			cout << -1 << endl;
			continue ; 
		}
		int a[ d ] = {0};
		int vt = d - 1 ;
		// xep cac so lon tu cuoi tro ve
		// giu lai vi tri dau tien
		for( int i = 9 ; i >= 1 ; i -- ){
			while( s > i && vt > 0 ){
				a[ vt ] = i ; 
				vt -- ; 
				s -= i ; 
			}
		}
		// gan cho vi tri dau tien
		a[ 0 ] = s ; 
		for( auto x : a ) cout << x ; 
		cout << endl;
	}
	
	return 0; 
}