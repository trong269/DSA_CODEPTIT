#include<bits/stdc++.h>
using namespace std ; 
#define ll long long

bool cmp ( pair <int,int> a , pair<int,int> b ){
	if ( a.second != b.second )return a.second > b.second ; 
	return a.first < b.first ; 
}

int main(){
	int t ; cin >> t ; 
	while( t-- ){
		int n ; cin >> n; 
		pair<int,int> a [ n ]; 
		for( int i = 0 ; i < n ; i ++ ){
			int id ; cin >> id ; 
			cin >> a[ i ].first >> a[ i ].second ; 
		}
		sort( a , a + n , cmp ) ;
		bool used_time[ 10000 ] = {false} ; 
		int  value = 0 , cnt = 0 ; 
		for( int i = 0 ; i < n ; i ++ ){
			for( int j = a[ i ].first  ; j >= 1 ; j -- ){ // kiem tra xem co khoang thoi gian nao trong khong 
				if ( !used_time[ j ] ){					// uu tien gan den deadline moi lam de nhuong thoi gian cho cong viec khac
					used_time[ j ] = true ; 
					cnt ++ ; 
					value += a[ i ].second ; 
					break ; 
				}
			}
		}
		cout << cnt << " " << value << endl; 
	}
	return 0 ; 
}