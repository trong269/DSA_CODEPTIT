#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
ll mod = 1e9 + 7;

//tối đa ta chỉ xếp được n / 2 cặp :
//nên ta chia mảng thành 2 phần là phần A : các con to , phần B : các con bé
// duyệt lần lượt từng con to một trong phần A xét với lần lượt các con ở phần B từ lớn -> bé để chon cặp cho nó 
// note : luôn ưu tiên con chứa con cao nhất có thể để tối ưu

int main(){
	int t; cin >> t ; 
	while( t -- ){
		int n ; cin >> n ; 
		int a[ n ] ; 
		for( auto &x : a ) cin >> x ; 
		sort( a , a + n , greater<int>() ); 
		int m = ( n - 1 ) / 2 ; 
		int cnt = 0 , i = m + 1;
		for( int j = 0 ; j <= m ; j ++ ){
			while( a[ j ] < 2 * a[ i ] and i < n )i ++ ; 
			if ( i != n ){
				cnt ++ ; 
				i ++ ; 
			}
		}
		cout << cnt + n - 2 * cnt << endl; 
	}
	
	return 0 ; 
}