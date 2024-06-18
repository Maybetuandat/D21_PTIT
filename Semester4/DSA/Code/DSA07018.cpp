#include<bits/stdc++.h>
using namespace std;
struct node
{
	int heso, somu;
	node * next;
	node(int heso, int somu)
	{
		this->heso = heso;
		this->somu = somu;
		this->next = NULL;
	}
};
int chuyendoi(string s)
{
	int ans = 0;
	for(int i=0; i<s.length(); i++)
	  ans = ans * 10 + (s[i] - '0');
	return ans;
}
pair<int, int> tach(string s)
{
	pair<int, int> res;
	int i = 0;	
		while(isdigit(s[i]))
		   i++;
		string adu = s.substr(0,  i );
		res.first = chuyendoi(adu);
		
		 i = s.length() - 1;
		while(isdigit(s[i]))
		    i--;
		adu = s.substr(i + 1, s.length() - i );
		res.second  = chuyendoi(adu);
		
	return res;
}
void ct()
{
	string s;
	
	getline(cin, s);
	stringstream ss(s);
	string cmp;
	node* head = NULL;
	vector<string> ans;
	while(ss >> cmp)
	  if(cmp != "+")
	    	ans.push_back(cmp);

	head = new node(tach(ans[0]).first, tach(ans[0]).second);
     //cout<<head->heso <<" "<<head->somu<<endl;
	node * tmp = new node(tach(ans[1]).first, tach(ans[1]).second);
	head->next = tmp;
	//cout<<tmp->heso <<"  "<<tmp->somu<<endl;
	for(int i=2; i< ans.size(); i++)
	{
		node * t = new node(tach(ans[i]).first, tach(ans[i]).second);
	//	cout<<t->heso <<"  "<<t->somu<<endl;
		tmp->next = t;
		tmp = tmp->next;
	}
	string s2;getline(cin, s2);
	//cout<<s2<<endl;
	stringstream ssj(s2);
	
	node* root = NULL;
	ans.clear();

	while(ssj >> cmp)
     if(cmp != "+")
    	ans.push_back(cmp);
	
	root = new node(tach(ans[0]).first, tach(ans[0]).second);
	 tmp = new node(tach(ans[1]).first, tach(ans[1]).second);
	root->next = tmp;
	for(int i=2; i< ans.size(); i++)
	{
		node * t = new node(tach(ans[i]).first, tach(ans[i]).second);
		tmp->next = t;
		tmp = tmp->next;
	}
//	while(head != NULL)
//	{
//		cout<<head->heso<<" "<<head->somu<<endl;
//		head = head->next;
//	}
//	
//		while(root != NULL)
//	{
//		cout<<root->heso<<" "<<root->somu<<endl;
//		root = root->next;
//	}
	
	
	//bieu thuc 1 duoc kiem soat boi head
	//bieu thuc 2 duoc kiem soat boi root
	
	vector<string> res;
	while(head != NULL && root != NULL)
	{
		if(head->somu > root->somu)
		{
			string cmp = to_string(head->heso) + "*x^" + to_string(head->somu);
			res.push_back(cmp);
			head = head->next;
		}
		else if(head->somu < root->somu)
			{
				string cmp = to_string(root->heso) + "*x^" + to_string(root->somu);
				res.push_back(cmp);
				root = root->next;
			}
			else if(head->somu == root->somu )
			{
				int adu = root->heso + head->heso;
				string cmp = to_string(adu) + "*x^" + to_string(head->somu);
				res.push_back(cmp);
				head = head->next;
				root = root->next;
			}
	}
	while(head != NULL)
	{
		string cmp = to_string(head->heso) + "*x^" + to_string(head->somu);
		res.push_back(cmp);
		head = head->next;
	}
	while(root != NULL)
	{
		string cmp = to_string(root->heso) + "*x^" + to_string(root->somu);
		res.push_back(cmp);
		root = root->next;
	}
	for(int i=0; i<res.size() - 1; i++)
	  cout<<res[i]<<" + ";
	cout<<res.back()<<endl;
}
int main ()
{
	int t; cin>>t;
	cin.ignore();
	while(t--)
	{
		ct();
	}
}
