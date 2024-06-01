#include<bits/stdc++.h>
using namespace std ; 
#define ll long long

void minx( int n , int s ){
	vector<int> res ; 
	for( int i = 1 ;i <= n ; i ++ ){
		for( int j = 9 ;  j >= 0 ; j -- ){
			if ( i == n ){
				if ( s == j ){
					s -= j ; 
					res.push_back( j );
					break;
				}
			}
			else {
				if ( s > j ){
					s -= j ; 
					res.push_back( j );
					break ; 
				}
			}
		}
	}
	reverse( res.begin(), res.end() );
	for( auto x : res )cout << x ; 
}
void maxx( int n , int s ){
	vector<int> res ; 
	for( int i = 1 ;i <= n ; i ++ ){
		for( int j = 9 ;  j >= 0 ; j -- ){
			if ( s >= j ){
				s -= j ; 
				res.push_back( j );
				break;
			}
		}
	}
	for( auto x : res )cout << x ; 
}
int main(){
	int n , s ;  
	cin >> n >> s ; 
	if ( s == 0 or 9 * n < s ){
		cout << -1 << " " << -1;
	}
	else {
		minx( n , s );
		cout << " ";
		maxx ( n , s );
	}
	
	return 0 ; 
}