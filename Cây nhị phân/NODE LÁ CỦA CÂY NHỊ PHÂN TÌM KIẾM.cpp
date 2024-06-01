#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
set<int> se ; 
struct node{
	int data ; 
	node* left , *right ; 
	node( int x ){
		data = x ; 
		left = right = NULL ; 
	}
};

node* insert( node* root , int x ){
	if ( root == NULL )return new node( x ) ; 
	if ( x > root->data )root->right = insert( root->right , x ) ; 
	else if ( x < root->data )root->left = insert( root->left , x ) ; 
	return root; 
}
void preOrder( node* root ){
	if ( root == NULL )return ; 
	if ( root->left == NULL and root->right == NULL )cout << root->data << " " ; 
	preOrder( root->left ) ; 
	preOrder( root->right ); 
}
int main(){
	int t ; cin >> t; 
	while ( t-- ){
		node * root = NULL ; 
		int n ; cin >> n ;
		while( n -- ){
			int x; cin >> x; 
			if ( root == NULL ){
				root = new node ( x ) ; 
			}
			else root = insert( root , x ) ; 
		}
		preOrder( root ) ; 
		cout << endl;
	}
	return 0 ; 
}