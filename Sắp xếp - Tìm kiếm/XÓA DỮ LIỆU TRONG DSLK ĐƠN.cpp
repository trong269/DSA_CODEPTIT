#include<bits/stdc++.h>
using namespace std;
#define ll long long

struct node {
	int data; 
	node* next ; 	
};

node* makeNode ( int x ){
	node* newnode = new node; 
	newnode->data = x; 
	newnode->next = NULL;
	return newnode;
}
void push( node* &head , int x ){
	node* newnode = makeNode ( x );
	if ( head == NULL ){
		head = newnode ; 
		return ; 
	}
	node* tmp = head ; 
	while( tmp -> next != NULL ){
		tmp = tmp -> next ; 
	}
	tmp->next = newnode ; 
}
void duyet ( node* head , int k ){
	while( head != NULL ){
		if ( head -> data != k )cout << head->data << " ";
		head = head -> next ;  
	}
}
int main(){
	node* head = NULL ; 
	int n ; cin >> n; 
	for( int i = 0 ; i < n; i ++ ){
		int x ; cin >> x ; 
		push( head , x ) ; 
	}
	int k ; cin >> k ; 
	duyet( head , k );
	return 0 ; 
}
//14
//1 1 1 4 5 1 1 1 1 7 1 8 1 9
//4 5 7 8 9