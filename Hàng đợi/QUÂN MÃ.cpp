#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
int c[ 10 ][ 10 ]; 
pair<int,int> p[ 8 ] = {{-2, -1}, {-2 , 1}, {-1, 2}, {1, 2} , {2, 1}, {2, -1}, {1, -2}, {-1 , -2}};
void init(){
	for( int i = 0 ;  i < 10 ; i ++ ){
		for( int j = 0; j < 10 ; j ++ )
			c[ i ][ j ] = -1 ; 
	}
}

void BFS( pair<int,int> a , pair<int,int> b ){
	if ( a == b ){
		cout << 0 << endl;
		return ; 
	}
	init();
	queue<pair<int,int>> q ; 
	q.push( a ) ; 
	c[ a.first ][ a.second ] = 0 ; 
	while( 1 ){
		pair<int,int> tmp = q.front(); q.pop();
		
		for( int i = 0 ; i < 8 ; i ++ ){
			int in = tmp.first + p[ i ].first ;
			int jn = tmp.second + p[ i ].second ;
			if( in >= 1 and in <= 8 and jn >= 1 and jn <= 8 and c[ in ][ jn ] == -1 ){
				q.push( {in, jn} );
				c[ in ][ jn ] = c[ tmp.first ][ tmp.second ] + 1 ; 
			}
		}
		if( c[ b.first ][ b.second ] != -1 )break ; 
	}
	cout << c[ b.first ][ b.second ] << endl;
}

int main(){
	int t ; cin >> t ; 
	while( t-- ){
		string s1 , s2 ; cin >> s1 >> s2 ; 
		pair<int,int> a, b ; 
		a.first = s1[ 0 ] - 'a' + 1 ; 
		a.second = s1[ 1 ] - '0';
		b.first = s2[ 0 ] - 'a' + 1 ; 
		b.second = s2[ 1 ] - '0'; 
		BFS( a , b ) ; 
	}
	
	return 0 ; 
}