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
void insert( node *root , int n1 , int n2 , char c ){
	if ( root == NULL )return ; 
	if ( root->data == n1 ){
		if ( c == 'L' )root->left = new node( n2 ) ; 
		else root->right = new node( n2 ) ; 
	}
	else {
		insert( root->left , n1 , n2 , c ) ; 
		insert( root->right , n1 , n2 , c ) ; 
	}
}
void duyet(node * root , int level ){
	if ( root == NULL )return ; 
	if ( root->left == NULL and root->right == NULL ){
		se.insert( level ); 
	}
	else {
		duyet( root->left , level + 1 ) ; 
		duyet( root->right , level + 1 ) ; 
	}
}
int main(){
	int t ; cin >> t; 
	while ( t-- ){
		se.clear() ; 
		node* root = NULL ; 
		int n ; cin >> n ; 
		while( n -- ){
			int n1 , n2 ; 
			char c ; 
			cin >> n1 >> n2 >> c ; 
			if ( root == NULL ){
				root = new node( n1 ); 
				if( c == 'L' ){
					root->left = new node( n2 ) ; 
				}
				else root->right = new node( n2 ) ; 
			}
			else {
				insert( root , n1 , n2 , c ) ; 
			}
		}
		duyet(root , 0); 
		if( se.size() == 1 )cout << 1 << endl;
		else cout << 0 << endl ; 
	}
	return 0 ; 
}