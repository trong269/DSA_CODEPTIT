#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
int x[ 10 ] ; 

bool nn ( int n ){
	return n % 400 == 0 or ( n % 4 == 0 and n % 100 != 0 ) ; 
}

bool check( ){
	int ng = x[ 1 ] * 10 + x[ 2 ] ; 
	int th = x[ 3 ] * 10 + x[ 4 ] ; 
	int nam = x[ 5 ] * 1000 + x[ 6 ] * 100 + x[ 7 ] * 10 + x[ 8 ] ; 
	if( nam < 2000 )return false ; 
	if( th < 1 or th > 12 )return false ; 
	if ( th == 1 or th == 3 or th == 5 or th == 7 or th == 8 or th == 10 or th == 12 ){
		return ng >= 1 and ng <= 31; 
	}
	else if ( th == 4 or th == 6 or th == 9 or th == 11 ){
		return ng >= 1 and ng <= 28; 
	}
	else {
		if( nn( nam ) ){
			return ng >= 1 and ng <= 29 ; 
		}
		else return ng >= 1 and ng <= 28 ; 
	}
	
	
}

void display(){
	string s = to_string( x[ 1 ] ) + to_string( x[ 2 ] ) + "/" + to_string( x[ 3 ] ) + to_string( x[ 4 ] ) + "/" + to_string( x[ 5 ] ) + to_string( x[ 6 ] ) + to_string( x[ 7 ] ) + to_string( x[ 8 ] ) ;
	cout << s << endl;
}
	
void back( int i ){
	for( int j = 0 ; j <= 2 ;j += 2 ){
		x[ i ] = j ; 
		if ( i == 8 ){
			if ( check ( ) ){
				display(); 
			}
		}
		else back ( i + 1 ) ; 
	}	
}

int main(){
	back( 1 ) ; 
	
	return 0 ; 
}