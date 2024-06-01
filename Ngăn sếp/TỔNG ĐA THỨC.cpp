#include<bits/stdc++.h>
using namespace std;
#define ll long long

struct node{
	pair<int,int> data ;
	node *next = NULL;
};
node* makeNode( pair<int,int> x ){
	node *newnode = new node;
	newnode->data.first = x.first ; 
	newnode->data.second = x.second ; 
	newnode->next = NULL; 
	return newnode ; 
}
void pushback( node* &head , pair<int,int> x ){
	node *newnode = makeNode( x ); 
	if ( head == NULL ){
		head = newnode ; 
		return ; 
	}
	node* tmp = head ; 
	while( tmp->next != NULL ){
		tmp = tmp->next ;
	}
	tmp->next = newnode ; 
}
void duyet( node* head ){
	while( head != NULL ){
		cout << head->data.first << " " << head->data.second << endl;
		head = head-> next ; 
	}
}
//HAM TINH TONG VA IN RA KET QUA CUA HAI DA THUC.
void solve ( node* P , node* Q ){
	while( P != NULL && Q != NULL ){
		if ( P->data.second == Q->data.second ){
			cout << P->data.first + Q->data.first << "*x^" << P->data.second  ; 
			P = P->next ;
			Q = Q->next ;
			if (P != NULL || Q != NULL )cout << " + ";
		}
		else if (P->data.second > Q->data.second ){
			cout << P->data.first << "*x^" << P->data.second  ; 
			P = P->next ;
			if (P != NULL || Q != NULL )cout << " + ";
		}
		else {
			cout << Q->data.first << "*x^" << Q->data.second  ; 
			Q = Q->next ;
			if (P != NULL || Q != NULL )cout << " + ";
		}
	}
	while( P != NULL ){
		cout << P->data.first << "*x^" << P->data.second  ; 
		P = P->next ;
		if (P != NULL || Q != NULL )cout << " + ";
	}
	while( Q != NULL ){
		cout << Q->data.first << "*x^" << Q->data.second  ; 
		Q = Q->next ;
		if (P != NULL || Q != NULL )cout << " + ";
	}
}
int main(){
	int t ; cin>> t ; 
	cin.ignore();
	while( t-- ){
		string s1, s2 ; 
		getline( cin , s1 ); 
		getline( cin , s2 );
		for( auto &x : s1 )if ( x == '+' ) x = ' ';
		for( auto &x : s2 )if( x == '+' ) x = ' ';
		// tao hai con tro head cho 2 linked list 
		node* P = NULL;
		node* Q = NULL; 
		// tach du lieu trong s1 
		stringstream ss1( s1 ); 
		string tmp ;
		while( ss1 >> tmp ){
			for( auto &x : tmp )if ( !isdigit( x ) )x = ' ';
			stringstream sss( tmp );
			string tmp1 ; 
			vector<int> v ;  
			while( sss >> tmp1 ){
				v.push_back( stoi( tmp1 ) );
			}
			// them vao cuoi dslk P
			pushback( P ,{v[ 0 ], v[ 1 ]} );
		}
		// tách dư lieu trong s2 
		stringstream ss2( s2 );
		while( ss2 >> tmp ){
			for( auto &x : tmp )if ( !isdigit( x ) )x = ' ';
			stringstream sss( tmp );
			string tmp1 ; 
			vector<int> v ;  
			while( sss >> tmp1 ){
				v.push_back( stoi( tmp1 ) );
			}
			// them vao cuoi dslk Q
			pushback( Q,{v[ 0 ], v[ 1 ]} );
		}
		solve ( P , Q ) ; 
		cout << endl;
	}
	return 0 ; 
}
