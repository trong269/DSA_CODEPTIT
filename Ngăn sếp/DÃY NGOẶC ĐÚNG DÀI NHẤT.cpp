#include<bits/stdc++.h>
using namespace std ; 
#define ll long long

int main(){
	int t ; cin >> t ; 
	while( t-- ){
		string s ; cin >> s ; 
		stack<int> st ; 
		int maxx = 0 ; 
		// moc ban dau 
		st.push( -1 ) ; 
		for( int i = 0 ; i < s.size() ; i ++ ){
			if ( s[ i ] == '(' ){
				st.push( i ) ; 
			}
			else {
				st.pop();
				if ( !st.empty() ){
					// cap nhat gia tri
					maxx = max( maxx , i - st.top() );
				}
				else st.push( i ) ; // thay doi moc moi
			}
		}
		cout << maxx << endl;
	}
	
	return 0 ; 
}