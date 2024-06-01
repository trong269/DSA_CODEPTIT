#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
int n , k ; 
vector<string> a ;
int x[ 100 ] = {0} ; 

void display(){
	for( int i = 1 ; i <= n ; i ++ ){
		cout << a[ x[ i ] ] << " " ; 
	}
	cout << endl;
}

void back ( int i ){
	for( int j = x[ i - 1 ] + 1 ; j <= n - k + i ; j ++ ){
		x[ i ] = j; 
		if ( i == k ){
			display(); 
		}
		else back ( i + 1 ) ; 
	}
}

int main(){
	cin >> n >> k ; 
	string s[ n ] ; 
	for( int i = 0 ; i < n; i ++ )cin >> s[ i ] ; 
	set<string> se( s , s + n ) ; 
	n = se.size(); 
	a.push_back ( " " ); 
	for( auto x : se ) a.push_back ( x ) ; 
	back ( 1 ) ; 
	
	return 0 ; 
}