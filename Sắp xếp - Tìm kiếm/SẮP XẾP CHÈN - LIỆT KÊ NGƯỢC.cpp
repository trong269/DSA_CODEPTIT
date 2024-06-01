#include<bits/stdc++.h>
using namespace std ; 
void insertion_sort( int a[] , int n ){
	vector<string> v ; 
	v.push_back( "Buoc 0: " + to_string( a[ 0 ] ) ); 
	for( int i = 1 ; i < n; i ++ ){
		int j = i - 1 ; 
		int val = a[ i ]; 
		while( j >= 0 && a[ j ] > val ){
			a[ j + 1 ] = a[ j ] ; 
			j -- ; 
		}
		a[ j + 1 ] = val; 
		string tmp = "Buoc " + to_string( i ) + ": " ; 
		for( int k = 0 ; k <= i ; k ++ ){
			tmp += to_string( a[ k ] ) + " "; 
		}
		v.push_back( tmp ) ; 
	}
	for ( int i = v.size() - 1 ; i >= 0 ; i -- ){
		cout << v[ i ] << endl;
	}
}

int main(){
	int n ; cin >> n ; 
	int a[ n ]; 
	for( auto &x : a ) cin >> x ; 
	insertion_sort( a , n ) ; 
	
	return 0 ; 
}