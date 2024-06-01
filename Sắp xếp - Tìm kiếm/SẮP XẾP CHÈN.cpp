#include<bits/stdc++.h>
using namespace std ; 

void insertion_sort( int a[] , int n ){
	cout << "Buoc 0: " << a[ 0 ] << endl;
	for( int i = 1 ; i < n; i ++ ){
		int j = i - 1 ; 
		int val = a[ i ]; 
		while( j >= 0 && a[ j ] > val ){
			a[ j + 1 ] = a[ j ] ; 
			j -- ; 
		}
		a[ j + 1 ] = val; 
		cout << "Buoc " << i << ": " ; 
		for( int k = 0 ; k <= i ; k ++ ){
			cout<< a[ k ] << " " ; 
		}
		cout<< endl;
	}
}

int main(){
	int n ; cin >> n ; 
	int a[ n ]; 
	for( auto &x : a ) cin >> x ; 
	insertion_sort( a , n ) ; 
	
	return 0 ; 
}