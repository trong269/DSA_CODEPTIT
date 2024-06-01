#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 

struct node {
	int data ; 
	node* left , *right ; 
	node( int x ){
		data = x ; 
		left = right = NULL ; 
	}	
};

node* insert( node* root , int x ){
	if ( root == NULL )return new node( x ); 
	if ( root->data > x )root->left = insert( root->left , x);
	else if ( root->data < x )root->right = insert( root->right , x );
	return root ; 
}
bool isMid ( node* root ){
	return root->left != NULL or root->right != NULL ; 
}
int cnt = 0 ; 
void Mid( node* root ){
	if ( root == NULL )return ; 
	if (isMid( root ) )cnt ++ ; 
	Mid( root->left ); 
	Mid( root->right );
}
int main(){
	int  t ; cin >> t ; 
	while( t-- ){
		node* root = NULL ; 
		int n;  cin >> n; 
		while( n -- ){
			int x ; cin >> x ; 
			if ( !root ){
				root = new node( x ); 
			}
			else {
				insert( root , x ) ; 
			}
		}
		cnt = 0 ; 
		Mid( root ); 
		cout << cnt << endl;
	}
	
	return 0 ; 
}