#include<bits/stdc++.h>
#include <cstdlib>
using namespace std;
bool cmp(string a, string b)
{
	stringstream ss(a);
	string cmp;
	vector<int> mang1, mang2;
	while(ss >> cmp)
	{
		int x = 0;
		for(char ch : cmp)
		  x = x * 10 + ch -'0';
		mang1.push_back(x);
	}
	stringstream ssj(b);
	int i=0;
	while(ssj >> cmp)
	{
		int x = 0;
		for(char ch : cmp)
		  x = x * 10 + ch -'0';
		  
		if(mang1[i] < x)
		   return true;
		else
		  if(mang1[i] > x)
		    return false;
		i++;
	}
	return true;
}
void xuli()
{
	int n,k; cin>>n>>k;
	vector<string > res;
	int ans[n+1];
	for(int i=1; i<=n; i++)
	  cin>>ans[i];
	sort(ans + 1, ans + n + 1);
	int a[n+1];
	for(int i=1; i<=n; i++)
	   a[i] = 0;
	while(1)
	{
		int tong = 0;
		string s ="";
		for(int i=1; i<=n; i++)
		  tong += ans[i] * a[i];
		if(tong == k)
		{
			 s="[";
			 for(int i=1; i<=n; i++)
			 {
			 
			   if(a[i] == 1)
			   {
			   	 s = s + to_string(ans[i]) + " ";
			   }
		      }
		      
			   s.erase(s.length() - 1);
			   s = s +"]";
			   res.push_back(s);
		}
		int i = n;
		while(i > 0 && a[i])
		{
			a[i] = 0;
			i--;
		}
		if(i == 0)
		  break;
		a[i] = 1;
	}
	if(res.size() == 0)
	{
		cout<<"-1\n";
		return;
	}
	sort(res.begin(), res.end(), cmp);
	for(string x : res)
		cout<<x<<" ";
	cout<<endl;
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		xuli();
	}
}
