#include<bits/stdc++.h>
using namespace std ; 
#define ll long long


int main(){
	int n ; cin >> n ; 
	vector<int> ke[ n + 1] ; 
	cin.ignore();
	for( int i = 1 ; i <= n ; i ++ ){
		string s ; getline( cin , s ) ;
		stringstream ss ( s ) ; 
		string tmp ; 
		while( ss >> tmp ){
			int num = stoi( tmp ) ; 
			ke[ i ].push_back( num ) ; 
		}
	}
	for( int i = 1 ; i <= n ; i ++ ){
		for( auto v : ke[ i ] ){
			if( v > i ){
				cout << i << " " << v << endl;
			}
		}
	}
	
	return 0 ; 
}
