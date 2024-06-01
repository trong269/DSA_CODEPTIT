#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
int n , m ; 
int a[ 505 ][ 505 ];

pair<int,int> p[ 8 ] = {{-1 , -1 }, { -1 , 0 } , { -1  , 1 } , { 0 , 1 } , { 1 , 1 } , { 1 , 0 } , { 1 , -1 }, { 0 , -1 } };

void nhap(){
	cin >> n >> m ; 
	for( int i = 1 ; i <= n ; i ++ ){
		for( int j = 1 ; j <= m ; j ++ )
			cin >> a[ i ][ j ];
	}
}

void BFS( pair<int,int> s ){
	queue <pair<int,int>> q;
	q.push( s ) ;
	a[ s.first ][ s.second ] = 0 ; 
	while( !q.empty() ){
		pair<int,int> tmp = q.front(); q.pop();
		int i = tmp.first ; 
		int j = tmp.second ; 
		
		for( int k = 0 ; k < 8 ; k ++ ){
			int in = i + p[ k ].first ; 
			int jn = j + p[ k ].second ;
			if ( in > 0 and in <= n and jn > 0 and jn <= m and a[ in ][ jn ] ){
				a[ in ][ jn ] = 0 ; 
				q.push( {in , jn } );
			}
		}
	}
}

int tplt(){
	int cnt = 0 ; 
	for( int i = 1 ;i <= n ; i ++ ){
		for( int j = 1 ; j <= m ;j ++ ){
			if ( a[ i ][ j ] ){
				cnt ++ ; 
				BFS( { i , j } );
			}
		}
	}
	return cnt ; 
}

int main(){
	int t ; cin >> t ; 
	while( t-- ){
		nhap();
		cout << tplt() << endl;
	}
	
	return 0; 
}