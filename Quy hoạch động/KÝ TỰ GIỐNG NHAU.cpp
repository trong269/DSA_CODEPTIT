#include<bits/stdc++.h>
using namespace std ; 
#define ll long long

int f[ 105 ];

int main(){
	int t ; cin >> t; 
	while( t-- ){
		int n ; cin >> n; 
		int x , y , z ; cin >> x >> y >> z ; 
		f[ 1 ] = x ; 
		for( int i = 2 ; i <= n ; i ++ ){
			if ( i % 2 == 0 ){
				f[ i ] = min( f[ i - 1 ] + x , f[ i / 2 ] + z );
			}
			else {
				f[ i ] = min( f[ i - 1 ] + x , f[ ( i + 1 ) / 2] + z + y );
			}
		}
		cout << f[ n ] << endl;
	}
	
	return 0 ; 
}
