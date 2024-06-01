#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	queue<int> q ;
	int t ; cin >> t; 
	while( t-- ){
		string tv ; cin >> tv ; 
		if ( tv == "PUSH" ){
			int x ; cin >> x; 
			q.push( x );
		}
		else if ( tv == "PRINTFRONT" ){
			if ( !q.empty() )cout << q.front() << endl;
			else cout << "NONE\n";
		}
		else {
			if ( !q.empty() )q.pop();
		}
	}
	
	return 0 ; 
}