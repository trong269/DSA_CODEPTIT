#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
ll mod = 1e9 + 7 ;


int main(){
	int t ; cin >> t ; 
	while( t -- ){
		
		int n ; cin >> n ; 
		int a[ n ] ; 
		for( auto &x : a ) cin >> x ; 
		priority_queue< int , vector<int> , greater<int> > pq ( a , a + n ); 
		ll sum = 0 ; 
		
		while( pq.size() > 1 ){
			int tmp1 = pq.top(); pq.pop();
			int tmp2 = pq.top(); pq.pop(); 
			sum += tmp1 + tmp2 ; 
			pq.push( tmp1 + tmp2 ); 
		}
		cout << sum << endl;
	}
	
	return 0 ; 
}