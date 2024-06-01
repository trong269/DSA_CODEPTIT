#include<bits/stdc++.h>
using namespace std;
#define ll long long

string turnLeft( string s ){
    char tmp0 = s[ 0 ] , tmp1 = s[ 1 ] , tmp4 = s[ 4 ], tmp3 = s[ 3 ];
    s[ 0 ] = tmp3 ; 
    s[ 1 ] = tmp0 ;
    s[ 4 ] = tmp1 ;
    s[ 3 ] = tmp4 ;
    return s ; 
}
string turnRight( string s ){
    char tmp1 = s[ 1 ], tmp2 = s[ 2 ], tmp4 = s[ 4 ], tmp5 = s[ 5 ];
    s[ 1 ] = tmp4 ;
    s[ 2 ] = tmp1 ;
    s[ 4 ] = tmp5 ;
    s[ 5 ] = tmp2 ;
    return s ; 
}

int bfs( string s , string t ){
    queue<string> q ; 
    map<string,int> cnt; 
    q.push(s) ;
    while( !q.empty()){
        string top = q.front() ; q.pop() ;
        string left = turnLeft(top) , right = turnRight(top) ;
        if ( cnt[ left ] == 0 ){
            cnt[ left ] = cnt[ top ] + 1 ;
            q.push(left) ;
        }
        if ( cnt[ right ] == 0 ){
            cnt[ right ] = cnt[ top ] + 1 ;
            q.push(right) ;
        }
        if ( cnt[ t ] != 0 )break ; 
    }
    return cnt[ t ] ; 
}
int main(){
    int te ; cin >> te ;
    while( te -- ){
        string s, t ; 
        for( int i = 0 ; i < 6 ; i ++ ){
            char x ; cin >> x ; 
            s.push_back(x) ;
        }
        for( int i = 0 ; i < 6 ; i ++ ){
            char x ; cin >> x ; 
            t.push_back(x) ;
        }
        cout << bfs( s , t ) << endl;

    }

    return 0 ; 
}