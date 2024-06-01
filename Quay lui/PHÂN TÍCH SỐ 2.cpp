#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
int n ; 
vector<int> v ; 
vector <string> res ; 
string in(){
	string s = "("; 
	for( auto x : v )s += to_string ( x ) + " " ; 
	s.pop_back( ); 
	s.push_back(')');
	return s ; 
}

void back( int sum , int prev ){
	for( int i = prev ; i >= 1 ; i -- ){
		if( sum + i <= n ){
			v.push_back( i ); 
			if ( sum + i == n ){
				res.push_back(in()); 
			}
			else back( sum + i , i ) ; 
			v.pop_back();
		}
	}
}

int main(){
	int t ; cin >> t ; 
	while( t -- ){
		res.clear();
		cin >> n ; 
		back( 0 , n ); 
		cout << res.size() << endl;
		for( auto x : res )cout << x << " " ; 
		cout << endl;
	}
	
	return 0 ; 
}