#include<bits/stdc++.h>
using namespace std;
struct node
{
	string data;
	struct node * left;
	struct node * right;
	node(string data)
	{
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
};
bool check(string s)
{
	if(s == "+" || s == "-" || s == "*" || s == "/")
	  return true;
	return false;
	
}
long long val(struct node * root)
{
	if(root == NULL)
	  return 0;
	if(root->left == NULL && root->right == NULL)
	{
		   return stoll(root->data);
	}
	long long l_val = val(root->left);
	long long r_val = val(root->right);
	
	if(root->data == "+")
	  return l_val + r_val;
	else  if(root->data == "-")
	       return l_val - r_val;
	else if(root->data == "*")
	     return l_val * r_val;
	else
	   return l_val / r_val;
}
void ct()
{
	int n; cin>>n;
	vector<string> ans;
	for(int i=0; i<n; i++)
	{
		string s; cin>>s;
		ans.push_back(s);
	}
	node * root = NULL;
	root = new node(ans[0]);
	
	
	queue<node*> q;
	q.push(root);
	
	int i = 0;
	while(!q.empty())
	{
		node * t = q.front(); q.pop();
		if(check(t->data))
		{
			i++;
			node* l = new node(ans[i]);
			i++;
			node* r = new node(ans[i]);
			t->left = l;
			t->right = r;
			q.push(l);
			q.push(r);
			
		}
	}

	cout<<val(root)<<endl;
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
