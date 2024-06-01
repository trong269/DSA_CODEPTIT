#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
ll mod = 1e9 + 7; 




int main(){
	int t ; cin >> t ; 
	while( t -- ){
		int n , s , m ; cin >> n >> s >> m ; 
		if ( 6 * ( n - m ) < m ){ // chi co 1 kha nang nay la bi chet doi
			cout << -1 << endl;
		}
		else {
			cout << ( m * s - 1 ) / n  + 1 << endl; // so ngay it nhat phai di mua gao
		}
	}
	
	return 0 ; 
}