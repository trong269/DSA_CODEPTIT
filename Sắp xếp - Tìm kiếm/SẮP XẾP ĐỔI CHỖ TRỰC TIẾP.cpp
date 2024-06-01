#include<bits/stdc++.h>
using namespace std ; 
#define ll long long

int main(){
	int n ; cin >> n ; 
	int a[ n ]; 
	for( auto &x : a )cin >> x ; 
	int cnt = 0 ; 
	for( int i = 0 ; i < n ; i ++ ){
		bool ok = false ;
		for( int j = i + 1 ; j < n ; j ++ ){
			if ( a[ j ] < a[ i ] ){
				swap( a[ i ] , a[ j ] ); 
				ok = true ;
			}
		}
		if ( ok ){
			cnt ++ ; 
			cout << "Buoc " << cnt << ": "; 
			for( int i = 0 ; i < n; i ++ )cout << a[ i ] << " "; 
			cout << endl;
		}
	}
	return 0 ; 
}