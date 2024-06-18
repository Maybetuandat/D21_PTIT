#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	 node* left;
	 node* right;
	 node(int data)
	 {
	 	this->data = data;
	 	this->left = NULL;
	 	this->right = NULL;
	 }
};
void insert(node* &root, int x)
{
	if(root == NULL)
	{
		root = new node(x);
		return;
	}
	if(root->data > x)
	  insert(root->left, x);
	if(root->data < x)
	  insert(root->right, x);
	  
	
}
void postOrder(node* root)
{
	if(root == NULL)
	   return;
	if(root->left)
	   postOrder(root->left);
	if(root->right)
	    postOrder(root->right);
	cout<<root->data<<" ";
}
void ct()
{
	int n; cin>>n;
	node * root = NULL;
	for(int i=0; i<n; i++)
	{
		int x; cin>>x;
		insert(root, x);
	}
	postOrder(root);
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
