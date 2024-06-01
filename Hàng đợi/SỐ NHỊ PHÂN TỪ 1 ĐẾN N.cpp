#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 

vector<string> v ; 
void init(){
	queue<string> q ; 
	q.push( "1" ) ;
	int n = 10001;
	while( n -- ){
		string tmp = q.front(); 
		v.push_back( tmp );
		q.pop() ; 
		q.push( tmp + "0" );
		q.push( tmp + "1" ); 
	}
}

int main(){
	init();
	int t ; cin >> t ; 
	while( t-- ){
		int n ; cin >> n ; 
		for( int i = 0 ; i < n; i ++ )cout << v[ i ] << " " ; 
		cout << endl;
	}
	
	return 0 ; 
}