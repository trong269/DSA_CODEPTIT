#include<bits/stdc++.h>
using namespace std ; 
#define ll long long

int main(){
	int n ; cin >> n ; 
	int a[ n ]; 
	for( auto &x : a )cin >> x ; 
	for( int i = 0 ; i < n - 1 ; i ++ ){
	    int val = a[ i ]  , m = -1 ; 
		for( int j = i + 1 ; j < n ; j ++ ){
			if ( a[ j ] < val ){
				m = j; 
				val = a[ j ] ; 
			}
		}
		if ( m != -1 )swap( a[ i ] , a[ m ] ); 
		cout << "Buoc " << i + 1 << ": "; 
		for( int i = 0 ; i < n; i ++ )cout << a[ i ] << " "; 
		cout << endl;
	}
	return 0 ; 
}