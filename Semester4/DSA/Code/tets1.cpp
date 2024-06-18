#include<bits/stdc++.h>
using namespace std;
typedef struct node
{
	int data;
	node *left;
	node *right;
} *Tree;
Tree createnode(int value)
{
	Tree tmp = new node;
	tmp->data = value;
	tmp->left = NULL;
	tmp->right = NULL;
	return tmp;
}
void buildtree(Tree &tmp, int par, int child, char ch )
{
	if(tmp == NULL)
	  return;
	if(tmp->data == par)
	{
		if(ch == 'L')
		  tmp->left = createnode(child);
		else
		  tmp->right = createnode(child);
		return;
	}
	buildtree(tmp->left, par, child, ch);
	buildtree(tmp->right, par, child, ch);
}
void inorder(node * root)
{
	if(root == NULL)
	  return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
void ct()
{
	
		int n; cin>>n;
		node* root = NULL;
		int par, child;
		char ch;
		cin>>par>>child>>ch;
		
		root = createnode(par);
		buildtree(root, par, child, ch);
		n-=1;
		for(int i=0; i<n; i++)
		{
			cin>>par>>child>>ch;
			buildtree(root, par, child, ch);
		}
		inorder(root);
}
int main ()
{
//	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
