#include<bits/stdc++.h>
using namespace std ;
#define ll long long

ll gcd( ll a , ll b ){
	if ( b == 0 )return a ; 
	return gcd( b , a % b );
}
ll lcm( ll a , ll b ){
	return a / gcd( a , b ) * b ; 
}

class ps{
	public:
	ll tu , mau ;
	public:
	void rutgon(){
		ll tmp = gcd( tu , mau ); 
		tu /= tmp ; 
		mau /= tmp ; 
	}
	ps operator - ( ps other ){
		ps res ; 
		res.mau = lcm( mau ,other.mau );
		res.tu = ( res.mau / mau ) * tu - ( res.mau / other.mau ) * other.tu ; 
		return res ; 
	}
	friend ostream& operator << ( ostream& out , ps x ){
		out << x.tu << "/" << x.mau ; 
		return out ; 
	}
	friend istream& operator >> ( istream& in , ps &x ){
		in >> x.tu >> x.mau ; 
		return in; 
	}
};

int main(){
	int t ; cin >> t ; 
	while( t-- ){
		ps x;
		cin >> x; 
		x.rutgon(); 
		while( x.tu != 1 ){
			ps y ; 
			y.tu = 1 ; 
			y.mau = x.mau / x.tu + 1 ; 
			cout << y << " + "; 
			x = x - y ; 
			x.rutgon(); 
		}
		cout << x << endl;
	}
	return 0 ; 
}