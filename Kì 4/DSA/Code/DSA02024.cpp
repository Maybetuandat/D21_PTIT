#include<bits/stdc++.h>
using namespace std;
int check(vector<int> a)
{
	for(int i=0; i<a.size() - 1; i++)
	   if(a[i] > a[i+1])
	     return 0;
	return 1;
}
int main ()
{
     int n;  cin>>n;
     int ans[n+1];
     for(int i=1; i<=n; i++)
        cin>>ans[i];
    int a[n+1];
    for(int i=1; i<=n; i++)
       a[i] = 0;
    vector<string> res;
	while(1)
	{
		vector<int> kq;
		for(int i=1; i<=n; i++)
		{
			if(a[i] ==  1)
			   kq.push_back(ans[i]);
		}
		if(kq.size() > 1 && check(kq))
		{
			string s="";
			for(int x : kq)
			   s = s + to_string(x) + " ";
			res.push_back(s);
		}
		int i=n;
		while(i > 0 && a[i] == 1)
		{
			a[i] = 0;
			i--;
		}
		if(i == 0)
		  break;
		a[i]++;
	}
	sort(res.begin(), res.end());
	for(string x : res)
	  cout<<x<<endl;
}
