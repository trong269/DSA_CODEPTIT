#include<bits/stdc++.h>
using namespace std ; 


int main(){
	string s1 , s2 ; cin >> s1 >> s2; 
	for( auto &x : s1 )if( x == '6' )x = '5';
	for( auto &x : s2 )if( x == '6' )x = '5';
	cout << stoi( s1 ) + stoi( s2 ) << " "; 
	for( auto &x : s1 )if( x == '5' )x = '6';
	for( auto &x : s2 )if( x == '5' )x = '6';
	cout << stoi( s1 ) + stoi( s2 ) << " "; 
	
	return 0 ; 
}