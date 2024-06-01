#include<bits/stdc++.h>
using namespace std ; 
#define ll long long

void move( int n , char start , char end ){
	cout << start << " -> " << end << endl;
}

void town( int n, char a , char b , char c ){
	if ( n == 1 ){
		move( 1 , a , c ) ; 
		return ; 
	}
	town( n - 1 ,a , c , b ); 
	move( n , a , c );
	town( n - 1 ,b , a , c ); 
}

int main(){
	int n ; cin >> n ; 
	town( n, 'A', 'B', 'C' ); 
	return 0 ; 
}