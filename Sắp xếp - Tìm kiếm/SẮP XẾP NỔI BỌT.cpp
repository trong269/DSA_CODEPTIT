#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 

int main(){
	int n ; cin >> n ; 
	int a[ n ] ; 
	for( auto &x : a ) cin >> x ; 
	for( int i = 0 ; i < n - 1 ; i ++ ){
		bool ok = false ; 
		for( int j = 0 ; j < n - i - 1 ; j ++ ){
			if ( a[ j ] > a[ j + 1 ] ){
				swap( a[ j ] , a[ j + 1 ] );
				ok = true ; 
			}
		}
		if ( ok == false )break ; 
		cout << "Buoc " << i + 1 << ": "; 
		for( int j = 0 ; j < n ;j ++ )cout << a[ j ] << " " ; 
		cout << endl;
	}
	
	return 0 ; 
}