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

node *insert( node* root , int x ){
	if ( root == NULL )return new node( x ); 
	if ( x < root->data )root->left = insert( root->left , x );
	else if ( x > root->data ) root->right = insert( root->right , x );
	return root ; 
}

void PostOrder( node* root ){
	if ( root == NULL )return ; 
	PostOrder( root->left ); 
	PostOrder( root->right ); 
	cout << root->data << " " ; 
}

int main(){
	int t ; cin >> t ; 
	while( t-- ){
		node* root = NULL ; 
		int n; cin >> n; 
		while( n -- ){
			int x ; cin >> x ; 
			if ( !root ){
				root = new node( x ); 
			}
			else{
				root = insert( root , x ); 
			}
		}
		PostOrder( root ); 
		cout << endl;
	}
	
	return 0 ; 
}