#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 
int c[ 10000000 ] ;

void BFS( int s , int t ){
	if ( s == t ){
		cout << 0 << endl;
		return ; 
	}
	for( auto &x : c )x = -1; 
	queue<int> q ; 
	q.push( s ) ; 
	// so cac bien doi ve s la bang 0
	c[ s ] = 0 ; 
	while( 1 ){
		int tmp = q.front(); q.pop() ; 
		if( tmp == t ) break ; 
		// gioi han duoi
		if ( tmp - 1 >= 0 and c[ tmp - 1 ] == -1 ){
			q.push( tmp - 1 ); 
			c[ tmp - 1 ] = c[ tmp ] + 1 ; 
		}
		// gioi han tren
		if ( tmp < t and c[ tmp * 2 ] == -1 ){
			q.push( tmp * 2 ); 
			c[ tmp * 2 ] = c[ tmp ] + 1 ; 
		}
		// bien doi dc ve t roi
		if ( c[ t ] != -1 )break ;  
	}
	cout << c[ t ] << endl;
}

int main(){
	int t ; cin >> t; 
	while( t-- ){
		int s ; int t ; cin >> s >> t ; 
		BFS( s , t ) ; 
	}
	
	return 0 ; 
}