#include<bits/stdc++.h>
using namespace std;
void ct()
{
	int k; string s1,s2;
	cin>>k>>s1>>s2;
	while(s1.length() !=  s2.length())
	{
		if(s1.length() < s2.length())
		  s1 = '0' + s1;
		else
		   s2 = '0' + s2;	
	}	
//	cout<<s1<<endl;
//	cout<<s2<<endl;
	int n = s2.length();
	int nho = 0;
	vector<int> ans;
	for(int i=n-1; i>=0; i--)
	{
		int cs1 = s1[i] - '0';
		int cs2 = s2[i] - '0';
		int tong = cs1 + cs2 + nho;
		nho = 0;
		if(tong >= k )
		{
			nho = 1;
			tong -= k;
		}
		ans.push_back(tong);
	}
	if(nho != 0)
	  ans.push_back(nho);
	reverse(ans.begin(), ans.end());
	for(int x : ans)
	  cout<<x;
	cout<<endl;
	
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
