#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 
int n , k ; 
int a[ 100 ][ 100 ]; 
bool cot[ 100 ] ; 
int x[ 100 ] ; 
vector<string> v ; 
bool check ( ){
	int sum = 0 ; 
	for( int i = 1 ; i <= n ; i ++ )sum += a[ i ][ x[ i ] ] ; 
	return sum == k ; 
}
string display(){
	string s = ""; 
	for( int i = 1 ; i <= n ; i ++ )s += to_string ( x[ i ] ) + " "; 
	return s ; 
}

void back ( int i ){
	for ( int j = 1 ; j <= n ; j ++ ){
		if (!cot[ j ] ){
			x[ i ] = j ; 
			cot[ j ] = true ; 
			if ( i == n ){
				if ( check( ) ){
					v.push_back( display() ); 
				}
			}
			else back ( i + 1 ) ; 
			cot[ j ] = false ; 
		}
	}
}

int main(){
	cin >> n >> k ; 
	for ( int i = 1 ; i <= n ; i ++ )
		for( int j = 1 ; j <= n ; j ++ )
			cin >> a[ i ][ j ]; 
	back( 1 ) ; 
	cout << v.size() << endl;
	for( auto x : v ) cout << x << endl; 
	return 0 ; 
}