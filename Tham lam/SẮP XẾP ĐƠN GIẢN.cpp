#include<bits/stdc++.h>
using namespace std ;
#define ll long long

int f[ 100005 ];
int main(){
	int n ; cin >>n ; 
	int a[ n ];
	for( auto &x : a ) cin >> x ; 
	int maxx = -1e9 ; 
	for( int x : a ){
		f[ x ] = f[ x - 1 ] + 1 ; 
		maxx = max( maxx , f[ x ] );
	}
	cout << n - maxx << endl;
	return 0 ; 
}