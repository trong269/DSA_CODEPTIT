#include<bits/stdc++.h>
using namespace std;

int main(){
    int t ; cin >> t ;
    while( t-- ){
        int n ; cin >> n ; 
        int a[ n ]; 
        for( auto &x : a ) cin >> x ; 
        int cnt = 0 ; 
        for( int i = 0 ; i < n ; i ++ ){
            int minx = a[ i ] ,vt = i ;
            for( int j = i + 1 ; j < n ; j ++ ){
                if ( a[ j ] < minx ){
                    minx = a[ j ] ;
                    vt = j ;
                }
            }
            if ( vt != i ) cnt ++ ;
            swap( a[ i ] , a[ vt ] ) ;
        }
        cout << cnt << endl ;
    }

    return 0 ; 
}