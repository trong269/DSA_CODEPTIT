// trong bài này ta không thể biết là nên hoán đổi vị trí nào với vị trí hiện tại là tốt nhất khi có 2 vị trí max
// vd:k = 2, 4355 => 5354 => 5534
//                 => 5345 => 5543 ( nên theo cách đổi chỗ này )
// Nên ta cần phải sử dụng quay lui để rẽ nhánh đến hết các trường hợp và liên tục cập nhật giá trị tốt nhất cho biến res 
// ta biết là tại vị trí i ta cần phải đổi chỗ cho một vị trí nào đó phía sau i mà có giá trị lớn nhất
// trong trường họp tại i có giá trị lớn nhất rồi thì ta không cần đổi chỗ 


#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 
int k ; 
string s , res ; 
// phải rẽ nhánh xét tất cả các trường hợp
void back( int i , string s , int cnt ){ // tìm các vị trí j đẻw swap( s[ i ] , s[ j ] ) => ra xâu lớn nhất 
	res = max( res , s ) ; // luôn cập nhật kết quả res lớn nhất 
	if ( cnt == k || i >= s.size() ){ // điều kiện dừng của bài toán 
		return ; 
	}
	char maxx = s[ i ] ; 
	for( int j = i + 1 ; j < s.size() ; j ++ ){ // tìm các vị trí có giá trị lớn nhất phía sau i 
		maxx = max( maxx , s[ j ] );
	}
	if ( maxx == s[ i ] ){ // nếu i là vị trí có giá trị lớn nhất roi thì không cần swap với bất kỳ vtrí nào khác nữa
		back( i + 1 , s , cnt ) ; // tiếp tục rẽ nhánh sang ptử tiếp theo
	}
	else { 
		for ( int j = i + 1 ; j < s.size() ; j ++ ){ 
			if ( s[ j ] == maxx ){ // các vị trí j phía sau i và lớn nhất
				string tmp = s ; // sử dụng biến tmp để không làm thay đổi biến s hiện tại 
				swap( tmp[ i ] , tmp[ j ] ) ; 
				back( i + 1 , tmp , cnt + 1 ) ; // rẽ nhánh sang ptử tiếp theo
			}
		}
	}
}


int main(){
	int t ; cin >> t ; 
	while( t -- ){
		 res = ""; 
		 cin >> k >> s ; 
		 back( 0 , s , 0 ); 
		 cout << res << endl;
	}
	return 0 ; 
}