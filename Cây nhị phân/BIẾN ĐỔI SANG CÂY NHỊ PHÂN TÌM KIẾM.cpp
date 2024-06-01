#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 


int main(){
	int t ; cin >> t ; 
	while( t-- ){
		set<int> se ; 
		int n ; cin >> n; 
		while(n-- ){
			int n1 , n2 ; 
			char c ; 
			cin >> n1 >> n2 >> c ; 
			se.insert( n1 ); 
			se.insert( n2 ) ; 
		}
		for( auto x : se )cout << x << " "; 
		cout << endl;
	}
	
	return 0 ; 
}