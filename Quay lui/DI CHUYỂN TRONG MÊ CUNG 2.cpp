#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
pair<int,int> p[ 4 ] = { { 1 , 0 } , { 0 , 1 } , { 0 , -1 }, { -1 , 0 }  };
int n ; 
int a[ 100 ][ 100 ];
vector<string> v ; 

void back(int i , int j , string s ){
	if ( i == n and j == n ){
		v.push_back( s ) ; 
		return ; 
	}
	a[ i ][ j ] = 0 ; 
	for ( int k = 0 ; k < 4 ; k ++ ){
		int in = i  + p[ k ].first ; 
		int jn = j + p[ k ].second ; 
		string kt ; 
		if ( k == 0 )kt = "D";
		else if ( k == 1 ) kt = "R"; 
		else if ( k == 2 )kt = "L"; 
		else kt = "U";
		if ( in > 0 and in <= n and jn > 0 and jn <= n and a[ in ][ jn ] == 1 ){
			back( in , jn , s + kt );
		}
	}
	a[ i ][ j ] = 1 ; 
}


int main(){
	int t ; cin >> t; 
	while( t -- ){ 
		cin >> n ; 
		for( int i = 1 ; i <= n; i ++ ){
			for( int j = 1 ; j <= n ; j ++ )
				cin >> a[ i ][ j ]; 
		}
		back( 1 , 1 , "" );
		if ( v.empty() ){
			cout << "-1\n" ; 
		}
		else {
			sort( v.begin() , v.end() ); 
			for( auto x : v )cout << x << " " ; 
			cout << endl;
		}
		v.clear();
		
	}
	
	return 0 ; 
}