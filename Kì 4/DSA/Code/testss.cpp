#include<bits/stdc++.h>
using namespace std;
int n; 
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
void postOrder(node* root)
{
	if(root != NULL)
	{
		postOrder(root->left);
		postOrder(root->right);
		cout<<root->data<<" ";	
	}
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
int timvitri(int in[], int x, int dau, int cuoi)
{
	for(int i=dau; i<= cuoi; i++)
	  if(in[i] == x)
	     return i;
	return -1;
	
}
node* build_tree( int in[], int pre[], int dau, int cuoi, int &predex)
{
	node* tmp = NULL;
	if(dau <= cuoi)
	{
		tmp = create(pre[predex]);
		int mid = timvitri(in, pre[predex], dau, cuoi);
		if(mid == -1)
		  return NULL;
		else
		{
			predex++;
			tmp->left = build_tree(in, pre, dau, mid - 1, predex);
			tmp->right = build_tree(in, pre, mid + 1, cuoi, predex);
		}
	}
	return tmp;
}
void ct()
{
    cin>>n;
	int in[n], pre[n];
	for(int &x : in)
	  cin>>x;
	for(int &x : pre)
	  cin>>x;
	int vt = 0 ;
	node* root = NULL;
	int predex = 0;
	root = build_tree(in, pre, 0 , n-1, predex);
	//inOrder(root);
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
