#include<bits/stdc++.h>
using namespace std ;
#define ll long long

struct node{
    int data ; 
    node*left , *right ; 
    node( int x ){
        data = x ; 
        left = right = NULL ; 
    }
};

void insert( node* root , int n1 , int n2 , char c ){
    if ( root == NULL )return ;
    if ( root->data == n1 ){
        if ( c == 'L'){
            root->left = new node( n2 );
        }
        else {
            root->right = new node( n2 );
        }
    }else {
        insert( root->left , n1 , n2 , c );
        insert( root->right , n1 , n2 , c );
    }
}
vector<int> res1 , res2 ;
void inOrder1( node* root ){
    if ( root == NULL )return ; 
    res1.push_back( root->data );
    inOrder1( root->left );
    inOrder1( root->right );
}
void inOrder2( node* root ){
    if ( root == NULL )return ; 
    res2.push_back( root->data );
    inOrder2( root->left );
    inOrder2( root->right );
}
bool check( ){
    if ( res1.size( ) != res2.size() )return false ;
    for( int i = 0 ; i < res1.size() ; i ++ ){
        if ( res1[ i ] != res2[ i ] )return false ;
    }
    return true ;
}
int main(){
    int t ; cin >> t ;
    while( t-- ){
        node* root1 = NULL ; 
        node* root2 = NULL ; 
        // cay 1
        int n; cin >> n ; 
        for( int i = 0 ; i < n; i ++ ){
            int n1 , n2 ;
            char c ; 
            cin >> n1 >> n2 >> c ;
            if ( root1 == NULL ){
                root1 = new node( n1 );
                if ( c == 'L'){
                    root1->left = new node( n2 );
                }
                else {
                    root1->right = new node( n2 );
                }
            }
            else {
                insert( root1 , n1 , n2 , c);
            }
        }
        // cay 2 
        int m ; cin >> m ; 
        for( int i = 0 ; i < m ; i ++ ){
            int n1 , n2 ; char c ; 
            cin >> n1 >> n2 >> c ;
            if ( root2 == NULL ){
                root2 = new node( n1 ); 
                if ( c == 'L'){
                    root2->left = new node( n2 );
                }else {
                    root2->right = new node( n2 );
                }   
            }
            else insert( root2 , n1 , n2 , c);
        }
        res1.clear(); res2.clear();
        inOrder1( root1 );
        inOrder2( root2 );
        if ( check() )cout << "1" << endl;
        else cout << "0" << endl;
    }

    return 0 ; 
}