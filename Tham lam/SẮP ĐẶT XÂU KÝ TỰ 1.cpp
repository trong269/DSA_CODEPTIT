#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
ll mod = 1e9 + 7 ;

bool check( string s ){
	map<char,int> mp ; 
	for( auto x : s )mp[ x ] ++ ;
	int n = s.size(); 
	for( auto x : s ){
		if( n - mp[ x ] < mp[ x ] - 1 )return false ; 
	}
	return true; 
}


int main(){
	int t ; cin >> t; 
	while( t -- ){
		string s ; cin >> s ; 
		if ( check ( s ) )cout << "1\n"; 
		else cout << "-1\n"; 
		
	}
	
	return 0 ; 
}