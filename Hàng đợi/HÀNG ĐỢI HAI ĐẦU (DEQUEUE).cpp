#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 

int main(){
	deque<int> dq ; 
	int q ; cin >> q;
	while(  q-- ){
		string s ; cin >> s; 
		if ( s == "PUSHFRONT"){
			int x ; cin >> x ; 
			dq.push_front( x ) ; 
		}
		else if ( s == "PRINTFRONT" ){
			if( !dq.empty() )cout << dq.front() << endl;
			else cout << "NONE\n";
		}
		else if ( s == "POPFRONT"){
			if ( !dq.empty() )dq.pop_front() ;
		}
		else if ( s == "PUSHBACK" ){
			int x; cin >> x; 
			dq.push_back(x);
		}
		else if ( s == "PRINTBACK" ){
			if( !dq.empty() )cout << dq.back() << endl;
			else cout << "NONE\n";
		}
		else{
			if ( !dq.empty() )dq.pop_back();
		}
	}
	
	return 0 ; 
}