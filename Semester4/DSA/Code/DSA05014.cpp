#include<bits/stdc++.h>
using namespace std;
string f[101];
string add(string a, string b)
{
	while(a.length() != b.length())
	{
		if(a.length() < b.length())
		  a =  '0' + a;
		else
		   b = '0' + b;
		
	}
	string s = "";
	int nho = 0, n = a.length();
	for(int i=n-1; i >= 0; i-- )
	{
		int cs1 = a[i]  - '0';
		int cs2 = b[i] - '0';
		int tong = cs1 + cs2 + nho;
		nho = 0;
		if(tong > 9)
		{
			tong = tong % 10;
			nho = 1;
		}
		char ch = tong + '0';
		s = ch + s;
	}
	if(nho != 0)
	  s = '1'+ s;
	return s;
}
string mul(string s1, string s2)
{
	int len1 = s1.size();
	int len2 = s2.size();
	int len = len1 + len2;
	vector<int> a,b;
	for(int i=0; i<len1; i++)
	  a.push_back(s1[i] - '0');
	for(int i=0; i<len2; i++)
	   b.push_back(s2[i] - '0');
	vector<vector<int>> res(len2);
	
	int index = 0;
	for(int i=len2 -1 ; i>=0; i--)
	{
		int nho =0, so = 0;
		int t = 0;
		while(t < index)
		{
			res[index].push_back(0);
			t++;
		}
		for(int j=len1-1; j>=0; j--)
		{
			so = a[j] * b[i] + nho;
			res[index].push_back(so % 10);
			nho = so /10;
		}
		if(nho > 0)
		  res[index].push_back(nho);
		while(res[index].size() < len)
		  res[index].push_back(0);
		reverse(res[index].begin(), res[index].end());
		index++;
	}
	int nho = 0;
	string ans ="";
	for(int j = res[0].size() - 1; j >=0; j--)
	{
		int so = nho;
		for(int i=0; i<res.size(); i++)
		    so += res[i][j];
		char ch = so % 10 + '0';
		ans = ch + ans;
		nho = so / 10;
	}
	if(nho != 0)
	{
		char ch = nho + '0';
		ans = ch + ans;
	}
	while(ans[0] == '0')
	  ans.erase(ans.begin());
	return ans;
}
void init()
{
	f[0] = "1";
	f[1] = "1";
	for(int i=2; i<= 100; i++)
	{
	
		f[i] = "0";
		for(int j=0; j<i; j++)
		  f[i] = add(f[i], mul(f[j], f[i - j - 1]));
	}
}
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin>>t;
	init();
	while(t--)
	{
		int n; cin>>n;
		cout<<f[n]<<endl;
	}
}
