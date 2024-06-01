#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool snt ( int n ){
    for( int i = 2 ; i <= sqrt( n ) ; i ++ ){
        if ( n % i == 0 ) return false ;
    }
    return n > 1 ; 
}

int bfs( string s , string t ){
    if ( s == t )return 0 ; 
    queue<string> q ; 
    map<string,int> cnt; 
    q.push(s) ;
    while( !q.empty()){
        string top = q.front() ; q.pop() ;
        string tmp = top ; 
        for( int i = 0 ; i < 4 ; i ++ ){
            for( char j = '0' ; j <= '9' ; j ++ ){
                if ( tmp[ i ] == j )continue ;
                if ( i == 0 and j == '0')continue;
                tmp[ i ] = j ; 
                if ( cnt[ tmp ] == 0 and snt( stoi(tmp) ) ){
                    cnt[ tmp ] = cnt[ top ] + 1 ; 
                    q.push( tmp ) ; 
                }
                tmp = top ; 
            }
        }
        if ( cnt[ t ] )break ; 
    }
    return cnt[ t ] ; 
}

int main(){
    int t ; cin >> t ;
    while( t-- ){
        string s , t ; cin >> s >> t ; 
        cout << bfs( s , t ) << endl;
    }


    return 0 ; 
}