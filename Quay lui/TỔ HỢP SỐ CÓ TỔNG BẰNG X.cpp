#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
int n , k ; 
int a[ 100 ] ;  
bool ok = false ; 
vector<int> res ; 

void in(){
	string s = "[";
	for( auto x : res ) s += to_string ( x ) + " " ;
	s.pop_back(); 
	s.push_back(']');
	cout << s ;  
}

void back( int sum , int prev ){
	for( int i = prev ; i <= n ; i ++ ){
		if ( sum + a[ i ] <= k ){
			res.push_back( a[ i ] ) ; 
			if ( sum + a[ i ] == k ){
				in(); 
				ok = true ; 
			}
			else back( sum + a[ i ] , i );
			res.pop_back();
		}
	}
}

int main(){
	int t ; cin >> t ; 
	while(t -- ){
		ok = false ; 
		cin >> n >> k ; 
		for( int i = 1 ; i <= n ; i ++ )cin >> a[ i ] ; 
		back( 0 , 1 ) ; 
		if( !ok )cout << -1;
		cout << endl;
		
	}
	
	return 0 ; 
}