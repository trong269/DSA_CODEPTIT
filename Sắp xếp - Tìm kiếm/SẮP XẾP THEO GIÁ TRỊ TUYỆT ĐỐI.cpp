#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
int x ; 
bool cmp ( int a , int b  ){
	return abs ( x - a ) < abs ( x - b ); 
}

int main(){
	int t ; cin >> t ; 
	while( t -- ){
		int n ; cin >> n >> x ; 
		int a[ n ] ; 
		for( auto &c : a ) cin >> c ; 
		stable_sort( a , a + n , cmp ); 
		for( int i = 0 ; i < n ; i ++ ) cout << a[ i ] << " " ; 
		cout << endl;
	}
	
	return 0 ; 
}