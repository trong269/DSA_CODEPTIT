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

bool check( node * root ){
    if ( root == NULL )return true ; 
    if ( root->left == NULL and root -> right == NULL )return true ;
    if ( !root->left or !root->right )return false ; 
    return check( root->left ) and check( root->right);
}

int main(){
    int t ; cin >> t ;
    while( t-- ){
        node* root = NULL ; 
        int n; cin >> n ; 
        for( int i = 0 ; i < n; i ++ ){
            int n1 , n2 ;
            char c ; 
            cin >> n1 >> n2 >> c ;
            if ( root == NULL ){
                root = new node( n1 );
                if ( c == 'L'){
                    root->left = new node( n2 );
                }
                else {
                    root->right = new node( n2 );
                }
            }
            else {
                insert( root , n1 , n2 , c);
            }
        }
        if ( check( root ) )cout << "1\n";
        else cout << "0\n";
    }

    return 0 ; 
}