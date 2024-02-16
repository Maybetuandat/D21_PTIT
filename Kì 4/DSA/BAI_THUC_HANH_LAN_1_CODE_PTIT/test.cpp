#include<bits/stdc++.h>
using namespace std;
int n,k;
vector<int> a;
int ch[100000];
vector<string> res;
void sang()
{
	for(int i=0; i<100000; i++)
		ch[i] = 1;
	ch[0]= ch[1] = 0;
	for(int i=2; i<100000; i++)
	{
		if(ch[i] == 1)
		{
			for(int j=i*2; j<100000; j+= i)
			{
				ch[j] = 0;
			}
		}
	}
}
void Try(int m)
{
	if(m > k)
	{
		string s = "";
		for(int i=1; i<=k; i++)
		  s+= to_string(a[i]) + " ";
		res.push_back(s);
		return;
	}
	for(int i=a[m-1] + 1; i <= n - k + m; i++)
	{
		a[m] = i;
		Try(m+1);
	}
}
int main ()
{
	sang();
	cin>>n>>k;
	a.resize(n+1);
	a[0] = 0;
	Try(1);
	for(int i=0; i<res.size(); i++)
	{
		if(ch[i+1] == 1)
		{
			cout<<i+1<<": "<<res[i]<<endl;
		}
	}
}
