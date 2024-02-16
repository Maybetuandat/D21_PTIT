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
int find(int in[], int dau, int cuoi, int key)
{
	for(int i=dau; i<=cuoi; i++)
	   if(in[i] == key)
	     return i;
	return -1;
	
}
node* buildtree(int in[], int pre[], int &index, int dau, int cuoi)
{
	//index la vi tri trong preorder
	node * tmp = NULL;
	if(dau <= cuoi)
	{
	tmp = new node(pre[index]);
	int mid = find(in, dau, cuoi, pre[index]);
	(index)++;
	tmp->left = buildtree(in, pre, index ,dau, mid - 1 );
	tmp->right = buildtree(in, pre, index, mid + 1, cuoi);
	}
	return tmp;
}
void postorder(node* root)
{
	if(root)
	{
		postorder(root->left);
		postorder(root->right);
		cout<<root->data<<" ";
	}
}
void ct()
{
	int n; cin>>n;
	int pre[n], in[n];
	for(int &x : in)
	  cin>>x;
	for(int &x : pre)
	  cin>>x;
	node* root = NULL;
	int index = 0;
	root = buildtree(in, pre, index, 0, n-1);
	postorder(root);
	cout<<endl;
}
int main ()
{
	ios_base::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}

