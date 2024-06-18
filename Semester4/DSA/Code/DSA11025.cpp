#include<bits/stdc++.h>
using namespace std;
void ct()
{
	
}
node* createbst(int a[], int start, int end)
{
	if(start > end)
	   return NULL;
	int mid = (start + end) / 2;
	node * root = new node(a[mid]);
	root->left = creatbst(a, start, mid - 1);
	root->right = createbst(a, mid + 1, end);
	return root;
}
void preOrder(node *root)
{
	if(root == NULL)
	  return;
	cout<<root->data <<" ";
	if(root->left )
	   preOrder(root->left);
	   if(root->right)
	     preOrder(root->right);
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
