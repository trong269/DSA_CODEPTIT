#include<bits/stdc++.h>
using namespace std ; 

int x[ 100 ] = {0};
int n ;

void ktao(){
	for ( int i = 1 ; i <= n ; i ++ )x[ i ] = 0; 
}
bool check1( ){
	for ( int i = 1 ; i <= n ; i ++ )if( x[ i ] != 1 )return false;
	return true;
}
bool check2( ){
	string s =  "";
	for ( int i = 1 ; i <= n ; i ++ )s += to_string( x[ i ] );
	string tmp = s; 
	reverse( tmp.begin() , tmp.end() );
	return s == tmp ; 
}
void display(){
	for( int j = 1 ; j <= n ; j ++ )cout << x[ j ] << " " ; 
	cout << endl;
}
void sinh(){
	int i = n ; 
	while( x[ i ] == 1 ){
		x[ i ] = 1 - x[ i ];
		i -- ;  
	}
	x[ i ] = 1- x[ i ];
}
int main(){
	cin >> n ; 
	ktao();
	display();
	while( !check1() ){
		sinh();
		if (check2( )){
			display();
		}
	}
		
	return 0 ; 
}