#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int bfs( int n ){
    queue<int> q ; 
    map<int,int> cnt ; // danh dau va dem buoc 
    q.push(n); 
    while( !q.empty()){
        int top = q.front() ; q.pop() ;
        if ( top > 1 and cnt[ top - 1 ] == 0 ){
            q.push( top - 1 ) ; 
            cnt[ top - 1 ] = cnt[top] + 1 ; 
        }
        if ( top > 1 ){
            for( int i = 2 ; i <= sqrt( top ) ; i ++ ){
                if ( top % i == 0 ){
                    if ( cnt[ top/i ] == 0 ){
                        q.push( top/i ) ; 
                        cnt[ top/i ] = cnt[top] + 1 ; 
                    }
                }
            }
        }
        if ( cnt[ 1 ] != 0 ) break ; 
    }
    return cnt[1] ;
}

int main(){
    int t ; cin >> t; 
    while( t-- ){
        int n ; cin >> n ;
        cout << bfs( n ) << endl ;
    }
    return 0 ; 
}