#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int t ; cin >> t; 
	while( t-- ){
		int n ; cin >> n ; 
		queue<int> q ; 
		while( n -- ){
			int x ; cin >> x; 
			if ( x == 1 ){
				cout << q.size() << endl;
			}
			else if ( x == 2 ){
				if ( q.empty() )cout << "YES\n";
				else cout << "NO\n";
			}
			else if ( x == 3 ){
				int y ; cin >> y ; 
				q.push( y );
			}
			else if ( x == 4 ){
				if( !q.empty() )q.pop();
			}
			else if( x == 5){
				if( !q.empty() )cout << q.front() << endl;
				else cout << -1 << endl;
			}
			else {
				if( !q.empty() )cout << q.back() << endl;
				else cout << -1 << endl;
			}
		}
	}
	
	return 0 ; 
}