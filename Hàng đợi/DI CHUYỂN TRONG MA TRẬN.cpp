#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 
int n , m , a[ 1005 ][ 1005 ] , c[ 1005 ][ 1005 ] ; 
void init(){
	for( int i = 0 ; i <= n ; i ++ ){
		for( int j = 0 ; j <= m ; j ++ )
			c[ i ][ j ] = -1 ; 
	}
}
void BFS(){
	init();
	c[ 1 ][ 1 ] = 0 ; 
	queue<pair<int,int>> q ;
	// đưa điểm đầu tiên vào trong hàng đợi 
	q.push( {1,1} );
	while( !q.empty() ){ 
		// lay ra điểm ở đầu hàng đợi 
		pair<int,int> tmp = q.front() ; q.pop() ; 
		int i = tmp.first , j = tmp.second ; 
		// loang đến các điểm nó có thể đi tới
		// => [i][j+a[i][j]]
		if ( i <= n and i >= 1 and j + a[ i ][ j ] <= m and j + a[ i ][ j ] >= 1 and c[ i ][ j + a[ i ][ j ] ] == -1 ){
			q.push( {i , j + a[ i ][ j ] } );
			c[ i ][ j + a[ i ][ j ] ] = c[ i ][ j ] + 1 ; 
		}
		// => [i+a[i][j]][j]
		if ( i + a[ i ][ j ] <= n and i + a[ i ][ j ] >= 1 and j <= m and j >= 1 and c[ i + a[ i ][ j ] ][ j ] == -1 ){
			q.push( {i + a[ i ][ j ] , j } ) ; 
			c[ i + a[ i ][ j ] ][ j ] = c[ i ][ j ] + 1 ; 
		}
		// nếu đến được đích roi thì dừng lại
		if( c[ n ][ m ] != -1 )break ; 
	}
	// in ra kq
	cout << c[ n ][ m ] << endl;
}

int main(){
	int t ; cin >> t; 
	while( t-- ){
		cin >> n >> m ; 
		for( int i = 1 ; i <= n ; i ++ ){
			for( int j = 1 ; j <= m ; j ++ )
				cin >> a[ i ][ j ] ; 
		}
		BFS();
	}
	
	return 0 ; 
}