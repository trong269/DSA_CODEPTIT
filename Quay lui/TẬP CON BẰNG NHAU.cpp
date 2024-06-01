#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
int n , a[ 101 ];
int s ; 
bool ok = false ; 
void back(int prev, int sum ){
	for( int i = prev + 1 ; i <= n ; i ++ ){
		if ( sum + a[ i ] <= s ){
			if ( sum + a[ i ] == s ){
				ok = true ; 
			}
			else if ( !ok )back( i , sum + a[ i ] ); 
		}
	}
} 

int main(){
	int t ; cin >>t ; 
	while( t-- ){
		ok = false ; 
		cin >> n ; 
		int sum = 0 ; 
		for( int i = 1 ; i <= n ; i ++ ){
			cin >> a[ i ] ; 
			sum += a[ i ] ; 
		}
		if( sum % 2 ){
			cout << "NO\n"; 
		}
		else{
			s = sum / 2 ; 
			back( 0 , 0 ); 
			if ( ok )cout << "YES\n"; 
			else cout << "NO\n"; 
		}
	}
	return 0; 
}