#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
int n ; 
string a[ 11 ] ; 
bool used [ 11 ]; 
int x[ 100 ]; 
int minx = 1e9 ; 
int update( int i ){
	if ( i == 1 )return 0 ; 
	int cnt = 0 ; 
	string s1 = a[ x[ i - 1 ] ] , s2 = a[ x[ i ] ]; 
	int l = 0 , r = 0 ;  
	while( l < s1.size() and r < s2.size() ){
		if ( s1[ l ] == s2[ r ] ){
			cnt ++ ; 
			l ++ ; r ++ ; 
		}
		else if ( s1[ l ] < s2[ r ] ) l ++ ; 
		else r ++ ; 
	}
	return cnt ;  
}

void back( int i , int sum ){
	for( int j = 1 ; j <= n ; j ++ ){
		if( used[ j ] == false ){
			x[ i ] = j ; 
			used[ j ] = true ; 
			if ( i == n ){
				minx = min ( minx , sum + update(i)) ;  
			}
			else if ( sum + update( i ) < minx ) back( i + 1 ,sum + update( i ) ); 
			used[ j ] = false ; 
		}
	}
}
int main(){
	cin >> n ; 
	for( int i = 1 ; i <= n ; i ++ )cin >> a[ i ] ; 
	back( 1 , 0 ); 
	cout << minx ; 
	return 0 ; 
}