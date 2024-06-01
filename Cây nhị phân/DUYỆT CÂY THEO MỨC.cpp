#include<bits/stdc++.h>
using namespace std ; 
#define ll long long

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
void leafOrder( node* root ){
	queue<node*> q ; 
	q.push(root);; 
	while( !q.empty() ){
		node* top = q.front() ; q.pop() ; 
		cout << top->data << ' ' ; 
		if ( top->left != NULL )q.push( top->left ) ; 
		if ( top->right != NULL )q.push( top->right ) ; 
	}
}
int main(){
	int t ; cin >> t; 
	while ( t-- ){
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
		
		leafOrder( root ) ; 
		cout << endl;
	}
	return 0 ; 
}