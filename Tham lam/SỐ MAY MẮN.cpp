#include<bits/stdc++.h>
using namespace std; 
#define ll long long

int main(){
	int t ; cin >> t; 
	while( t -- ){
		int n ; cin >> n ; 
		int dem_7 = n / 7 , dem_4 = -1;
		for( int i = dem_7 ; i >= 0 ; i -- ){
			if( (n - i * 7) % 4 == 0 ){
				dem_7 = i;
				dem_4 = (n - i * 7) / 4;
				break ; 
			}
		}
		if ( dem_4 == -1 )cout << -1 << endl;
		else{
			for( int i = 1 ; i <= dem_4 ; i ++ )cout << 4 ; 
			for( int i = 1 ; i <= dem_7 ; i ++ )cout << 7 ; 
			cout << endl;
		}
	}
	
	return 0 ; 
}