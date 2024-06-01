#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
int n ; 
int a[ 100 ]; 
vector<string> res ; 
vector<int> v ;
string display(  ){
	string tmp = ""; 
	for( auto x : v ) tmp += to_string( x ) + " "; 
	return tmp ; 
}

void back( int prev ){
	for( int i = prev + 1 ; i <= n ; i ++ ){
		if ( a[ i ] > a[ prev ] ){
			v.push_back( a[ i ] ) ; 
			if ( v.size() >= 2 )res.push_back( display());
			if ( i < n )back( i ) ; 
			v.pop_back();
		}
	}
}

int main(){
	cin >> n ; 
	for( int i = 1 ; i <= n; i ++ )cin >> a[ i ] ; 
	a[ 0 ] = -1 ; 
	back( 0 );
	sort( res.begin() , res.end() ); 
	for( auto x : res ) cout << x << endl;
	return 0 ; 
}