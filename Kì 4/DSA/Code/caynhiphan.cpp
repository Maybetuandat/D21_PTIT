#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	node *left;
	node *right;
	node(int data)
	{
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
};
void insert(node* &t, int x)
{
	if(t == NULL)
	{
		t = new node(x);
		return;
	}
	if(t->data > x)
		insert(t->left, x);
	if(t->data < x)
		insert(t->right, x);
}
void NLR(node* root)
{
	if(root != NULL)
	{
		cout<<root->data<<" ";
		NLR(root->left);
		NLR(root->right);
	}
}
int main()
{
	int n; cin>>n;
	node* root = NULL;
	for(int i=0; i<n; i++)
	{
		int x; cin>>x;
		insert(root, x);
	}
	NLR(root);
	cout<<endl;
}
