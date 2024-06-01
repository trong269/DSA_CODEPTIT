#include<bits/stdc++.h>
using namespace std ; 

void bubble_sort( int a[] , int n ){
	vector<string> v ; 
	for ( int i = 0 ; i < n - 1 ; i ++ ){
		bool ok = false ; 
		for( int j = 0 ; j < n - i - 1 ; j ++ ){
			if ( a[ j ] > a[ j + 1 ] ){
				ok = true ; 
				swap( a[ j ] , a[ j + 1 ] ); 
			}
		}
		if ( ok == false )break ; 
		string tmp = "Buoc " + to_string ( i + 1 ) + ": " ;
		for( int j = 0 ; j < n ; j ++ )tmp += to_string( a[ j ] ) + " ";  
		v.push_back( tmp ); 
	}
	for( int i = v.size() - 1 ; i >= 0 ; i -- )cout << v[ i ] << endl;
}

int main(){
	int t ; cin >> t ; 
	while(t -- ){
		int n ; cin >> n; 
		int a[ n ]; 
		for( auto &x : a ) cin >> x ; 
		bubble_sort( a , n ) ; 
		
	}
	return 0 ; 
}