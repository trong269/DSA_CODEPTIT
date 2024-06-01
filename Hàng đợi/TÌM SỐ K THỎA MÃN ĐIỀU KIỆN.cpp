#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> res ; 

bool check( string s ){
    set<char> se( s.begin() , s.end() ) ;
    return se.size() == s.size() ;
}

void gen(){
    queue<string> q ; 
    for( char i = '1' ; i <= '5' ; i ++ ){
        q.push( string( 1 , i ) ) ; 
        res.push_back( i - '0' ) ;
    }
    while( !q.empty()){
        string top = q.front() ; q.pop() ;
        for( char i = '0' ; i <= '5' ; i ++ ){
            string tmp = top + string( 1 , i ) ; 
            if ( check( tmp ) ){
                q.push( tmp ) ; 
                res.push_back( stoi( tmp ) ) ; 
            }
        }
        if ( top.size() > 6 )break ; 
    }
}

int main(){
    gen() ;
    int t ; cin >> t ;
    while( t-- ){
        int a , b ; cin >> a >> b ; 
        int r = upper_bound( res.begin() , res.end() , b ) - res.begin() ;
        int l = lower_bound( res.begin() , res.end() , a ) - res.begin() ;
        cout << r - l << endl;
    }

    return 0 ; 
}