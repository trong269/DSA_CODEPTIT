#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 
int n , k ; 
int a[ 100 ];
bool used[ 100 ] = {false};
int res ; 
bool ok = false ;
void back(int prev, int sum , int cnt ){
	if ( cnt == k ){
		ok = true ; 
		return ; 
	} 
	for( int i = prev + 1; i <= n ; i ++ ){
		if ( !used[ i ] && sum + a[ i ] <= res ){
			
			used[ i ] = true ; 
			if( sum + a[ i ] == res ){
				back( 0 , 0 , cnt + 1 );
			}
			else if ( !ok )back( i , sum + a[ i ] , cnt );
			used[ i ] = false ; 
		}
	}
}

int main(){
	int t; cin >> t; 
	while( t-- ){
		ok = false ;
		cin >> n >> k ; 
		int sum = 0 ; 
		for( int i = 1 ; i <= n ; i ++ ){
			cin >> a[ i ];
			sum += a[ i ];
		}
		if ( sum % k != 0 ){
			cout << 0 << endl;
			continue ; 
		}
		else res = sum / k ; 
		back( 0 , 0 , 0 );
		if ( ok )cout << 1 << endl;
		else cout << 0 << endl;
	}
	
	return 0 ; 
}