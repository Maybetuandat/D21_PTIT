#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	node* left;
	node* right;
};
node* create(int x)
{
	node* tmp = new node;
	tmp->data = x;
	tmp->left = NULL;
	tmp->right = NULL;
	return tmp;
}
void preOrder(node* root)
{
	if(root)
	{
		
		cout<<root->data<<" ";
		preOrder(root->left);
		preOrder(root->right);
	}
}
void build_tree(node* &root, int x)
{
	if(root == NULL)
	{
		node* p = new node;
		p->data = x;
		p->left = NULL;
		p->right = NULL;
		root = p;
	}
	else if(root->data > x)
			build_tree(root->left, x);
		 else if(root->data < x)
			   build_tree(root->right, x);
}
void ct()
{
	int n; cin>>n;
	node* root = new node;
	root = NULL;
	
	for(int i=0; i<n; i++)
	{
		int x; cin>>x;
		build_tree(root, x);
	}
	preOrder(root);
	cout<<endl;
}
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
