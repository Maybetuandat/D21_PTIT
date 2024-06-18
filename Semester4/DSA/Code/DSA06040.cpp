#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void xuli()
{
	int n1, n2,n3;  cin>>n1>>n2>>n3;
	vector<ll> a1(n1);
	vector<ll> a2(n2);
	vector<ll> a3(n3);
	for(auto &x : a1)
	  cin>>x;
	for(auto &x : a2)
	   cin>>x;
	for(auto &x: a3)
	   cin>>x;
	int i=0, j=0,k=0;
	vector<ll> ans;
	while(i < n1 && j<n2 && k < n3)
	{
		if(a1[i] == a2[j] && a1[i] == a3[k])
		{
			ans.push_back(a1[i]);
			i++;
			j++;
			k++;
		}
		else 
		if(a1[i] < a2[j])   i++;
		
		else if(a2[j] < a3[k]) j++;
		else
		   if(a3[k] < a1[i])
		     k++;
	}
	if(ans.empty())
	  cout<<"-1\n";
	else
	{
		for(ll x : ans)
		  cout<<x<<" ";
		cout<<endl;
	}
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		xuli();
	}
}
