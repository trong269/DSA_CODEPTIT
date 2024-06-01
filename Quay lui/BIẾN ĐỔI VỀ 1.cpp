#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
int minx = 1e9 ; 

void back( int n ,int sum ){
	if ( sum > minx )return ; 
	if( n == 1 ){
		minx = sum;
		return ; 
	} 
	for( int i = 3 ; i >= 1 ; i-- ){
		if( i == 1 ){
			back( n - 1 , sum + 1 ); 
		}
		else if ( i == 2 ){
			if ( n % 2 == 0 ){
				back( n / 2 , sum + 1 );
			}
		}
		else if ( i == 3 ){
			if ( n % 3 == 0 ){
				back( n / 3 , sum + 1 ); 
			}
		}
	}
}

int main(){
	int t ; cin >> t ; 
	while( t -- ){
		minx = 1e9 ; 
		int n ; cin >> n ; 
		back( n , 0 ); 
		cout << minx << endl;
	}
	
	return 0 ; 
}
//ta không biết được tại mỗi bước nên làm thế nào là tốt nhất nên ta duyệt toàn bộ các trường họp 
// ưu tiên theo thứ tự n / 3 , n / 2 , n - 1 để n giảm nhanh nhất -> ít bước nhất