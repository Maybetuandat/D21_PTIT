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
void buildtree(node* root, int par, int child,char  ch)
{
	if(root == NULL)
	  return;
	if(root->data == par)
	{
		node* tmp = create(child);
		if(ch == 'L')
		   root->left = tmp;
		else
		  root->right = tmp;
	    return;
	}
	buildtree(root->left, par, child, ch);
	buildtree(root->right, par, child, ch);
}
void inOrder(node* root)
{
	if(root)
	{
		inOrder(root->left);
	    cout<<root->data<<" ";
	    inOrder(root->right);	
	}
	
}
void levelOrder(node* root)
{
	stack<node*> st1;
	stack<node*> st2;
	st1.push(root);
	while(st1.size() or st2.size())
	{
		while(!st1.empty())
		{
			node* top = st1.top();
			st1.pop();
			if(top == NULL)
			  continue;
			cout<<top->data<<" ";
			st2.push(top->right);
			st2.push(top->left);
		}
		while(!st2.empty())
		{
			node* top = st2.top();
			st2.pop();
				if(top == NULL)
			  continue;
			cout<<top->data<<" ";
			st1.push(top->left);
			st1.push(top->right);
		}
	}
}
void ct()
{
	int n; cin>>n;
	int par, child;
	char ch;
	cin>>par>>child>>ch;
	node * root = create(par);	
	if(ch == 'L')
	  root->left = create(child);
	else
	  root->right = create(child);
	for(int i=1; i<n; i++)
	{
		cin>>par>>child>>ch;
		buildtree(root, par, child, ch);
	}
	levelOrder(root);
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
