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
void duyet ( node* head ){
	map<int,int> mp ; 
	while( head != NULL ){
		if ( mp[ head->data ] == 0 ){
			cout << head->data << " ";
			mp[ head->data ] = 1 ; 
		}
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
	duyet( head );
	return 0 ; 
}
//12
//1 1 1 4  5 1 4  7 7 8 1 9