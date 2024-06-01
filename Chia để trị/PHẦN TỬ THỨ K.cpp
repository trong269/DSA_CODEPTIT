#include<bits/stdc++.h>
using namespace std ; 
#define ll long long


int main(){
	int t ; cin >> t ; 
	while( t -- ){
		int n , m , k ; cin >> n >> m >> k ; 
		int a[ n ] , b[ m ]; 
		for( auto &x : a )cin >> x ; 
		for( auto &x : b )cin >> x ; 
		int i = 0 , j = 0 , cnt = 0 ; 
		while( i < n and j < m ){
			if ( a[ i ] <= b[ j ] ){
				cnt ++;
				if ( cnt == k ){
					cout << a[ i ] << endl;
				}
				i ++ ; 
			}
			else{
				cnt ++ ; 
				if ( cnt == k ){
					cout << b[ j ] << endl;
				}
				j ++ ; 
			}
		}
		while( i < n ){
			cnt ++ ; 
			if ( cnt == k ){
					cout << a[ i ] << endl;
			}
			i ++ ; 
		}
		while( j < m ){
			cnt ++ ; 
			if ( cnt == k ){
					cout << b[ j ] << endl;
			}
			j ++ ; 
		}
	}
	
	return 0 ; 
}