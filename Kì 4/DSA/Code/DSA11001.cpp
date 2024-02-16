#include<bits/stdc++.h>
using namespace std;
struct node
{
	string data;
	node *left;
	node * right;
	node(string data)
	{
		this->data = data;
		this->right = NULL;
		this->left = NULL;
	}
};
bool check(char ch)
{
	if(ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^')
	  return true;
	return false;
}
void inorder(node* root)
{
	if(root != NULL)
	{
		inorder(root->left);
		cout<<root->data;
		inorder(root->right);	
	}
	
}
void ct()
{
	string s; cin>>s;
	stack<node*> st;
	for(int i=0; i<s.length(); i++)
	{
		if(!check(s[i]))
		{
			node* t = new node(string(1, s[i]));
			st.push(t);
		}
		else
		{
			node* t1= st.top(); st.pop();
			node* t2 = st.top(); st.pop();
			node* t = new node(string(1,s[i]));
			t->left = t2;
			t->right = t1;
			st.push(t);
		}
	}	
	node * root = st.top();
	inorder(root);
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
