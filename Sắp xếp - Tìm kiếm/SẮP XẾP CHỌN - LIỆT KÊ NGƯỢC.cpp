#include<bits/stdc++.h>
using namespace std ; 

void selection_sort( int a[ ] , int n ){
	vector<string> v ; 
	for ( int i = 0 ; i < n - 1 ; i ++ ){
		int val_min = a[ i ] , vt = -1 ; 
		for( int j = i + 1 ; j < n; j ++ ){
			if (  a[ j ] < val_min ){
				val_min = a[ j ] ; 
				vt = j ; 
			}
		}
		if ( vt != -1 )swap( a[ i ] , a[ vt ] ) ; 
		string tmp = "Buoc " + to_string ( i + 1 ) + ": " ;
		for ( int j = 0 ; j < n ; j ++ )tmp += to_string ( a[ j ] ) + " "; 
		v.push_back( tmp ) ;  
	}
	for( int i = v.size() - 1 ; i >= 0 ; i -- )cout << v[ i ] << endl;
}

int main(){
	int n ; cin >> n; 
	int a[ n ]; 
	for( auto &x : a ) cin >> x ; 
	selection_sort( a , n ) ; 
	
	return 0 ; 
}