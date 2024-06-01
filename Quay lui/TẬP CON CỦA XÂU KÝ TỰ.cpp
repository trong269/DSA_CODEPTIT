#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
int n; 
string s; 
int x[ 100 ] ; 
vector<string> v; 

void save(){
	string res ; 
	for( int i = 0 ; i < n ; i ++ ){
		if ( x[ i ] ){
			res.push_back( s[ i ] ); 
		}
	}
	if ( !res.empty() )v.push_back(res);
}

void back( int i ){
	for( int j = 0 ; j <= 1 ; j ++ ){
		x[i] = j ; 
		if ( i == n - 1 ){
			save();
		}
		else back( i + 1 );
	}
}

int main(){
	int t ; cin >> t ; 
	while( t-- ){
		cin >> n ; 
		cin >> s ; 
		back( 0 ); 
		sort( v.begin(), v.end() );
		for( auto x : v )cout << x << " ";  
		cout << endl;
		v.clear();
	}
	
	return 0 ; 
}