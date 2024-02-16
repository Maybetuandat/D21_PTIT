//thuat toan:
//khi gap I thi ta chi can chen phan tu res vao khi res duoc tang sau moi vong lap
//khi gap D thi cu them vao phan tu o cuoi, sau do tang them don vi tu vitri cuoi cung tang den vi tri truoc vi tri gap D

#include<bits/stdc++.h>
using namespace std;
void xuli(string s)
{
	int i=0,j,t,vt,n=s.length();
	vector<int> ans;
	if(s[0] =='I')
	{
		ans.push_back(1);
		ans.push_back(2);
		vt=1;
	}
	else
	{
		ans.push_back(2);
		ans.push_back(1);
		vt=0;
	}
	int res=3;
	for(i=1; i<n; i++)
	{
		if(s[i] == 'I')
		{
			ans.push_back(res);
			vt=i+1;
		}
		else
		{
			ans.push_back(ans[i]);
			for(int j=vt; j<=i; j++)
			   ans[j]++;
		}
		res++;
	}
	for(int x: ans)
	  cout<<x;
	cout<<endl;
}
void ct()
{
	int t; cin>>t;
	string s;
	while(t--)
	{
		cin>>s;
		xuli(s);
	}
}
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ct();
	return 0;
}
