#include <bits/stdc++.h>
using namespace std;

using ll = long long;

struct node
{
	ll data;
	node *left;
	node *right;
	node(ll value)
	{
		data = value;
		left = right = NULL;
	}
};
map<ll, node *> mp;
void insert_node(node *&root, ll u, ll v, char c)
{
	if (mp.find(u) == mp.end())
	{
		root = new node(u);
		if (c == 'L')
		{
			root->left = new node(v);
			mp[v] = root->left;
		}
		else
		{
			root->right = new node(v);
			mp[v] = root->right;
		}
		mp[u] = root;
	}
	else
	{
		if (root->data == u)
		{
			if (c == 'L')
			{
				mp[u]->left = new node(v);
				mp[v] = mp[u]->left;
			}
			else
			{
				mp[u]->right = new node(v);
				mp[v] = mp[u]->right;
			}
		}
		else
		{
			if (root->left != NULL)
				insert_node(root->left, u, v, c);
			if (root->right != NULL)
				insert_node(root->right, u, v, c);
		}
	}
}
bool isLeave(node *root)
{
	if (root == NULL)
		return false;
	if (root->left == NULL && root->right == NULL)
		return true;
	else
		return false;
}

ll sum ( node* root , char flag = '!' ){
	if ( root == NULL )return 0 ; 
	if ( !root->left and !root->right ){
		if ( flag == 'R' )return root->data ; 
		else return 0 ; 
	} 
	return sum( root->left , 'L' ) + sum ( root->right , 'R'); 
}
int main()
{
	ll t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		ll u, v;
		char c;
		node *root = NULL;
		while (n--)
		{
			cin >> u >> v >> c;
			insert_node(root, u, v, c);
		}
		cout << sum(root) << endl;
		root = NULL;
		delete root;
		mp.clear();
	}
	return 0;
}