#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 

ll f[ 50 ] ; 
int main(){
	int t ; cin >> t; 
	while( t-- ){
		string s ; cin >> s ; 
		int n = s.size() - 1 ; 
		string tmp = ""; 
		tmp.push_back( s[ 0 ] ); 
		//bai toan co so
		f[ 0 ] = stoll ( tmp ) ; 
		// xay dung f[i]: tong tat ca cac xau con khi xe den vi tri thu i
		for( int i = 1 ; i < s.size(); i ++ ){
			tmp.push_back( s[ i ] ) ; 
			f[ i ] = f[ i - 1 ] ; 
			string tmp2 = ""; 
			for( int j = tmp.size() - 1 ; j >= 0 ; j -- ){
				tmp2 = tmp[ j ] + tmp2 ; 
				// cong cac xau con ket thuc tai vi tri i vao tong hien co
				f[ i ] += stoll ( tmp2 ) ; 
			}
		}
		cout << f[ n ] << endl;
	}
	
	return 0 ; 
}