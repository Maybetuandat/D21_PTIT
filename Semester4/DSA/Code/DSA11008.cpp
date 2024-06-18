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
int Lv[1009], a[30];
void duyet(Tree t, int lv)
{
	if(t == NULL)
	  return;
	Lv[lv] ++;  // dem so nut trong mot muc cua cay
	duyet(t->left, lv + 1);  
	duyet(t->right, lv + 1);
}
int check()
{
	
	for(int i=0; i<=30; i++)
	{
		if(Lv[i] == 0)
		  return 1;// khi duyet qua so muc cua cay thi dung lai
		if(Lv[i] != a[i])
		  return 0; // khi tong so nut o muc i khong bang so la o muc i
	}
	return 1;
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
		memset(Lv, 0, sizeof(Lv));
		for(int i=0; i<=30; i++)
		{
			a[i] = pow(2, i);
		}
		duyet(root, 0 );
		cout<<check()<<endl;
//		inorder(root);
//		cout<<endl;
}
int main ()
{
     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
