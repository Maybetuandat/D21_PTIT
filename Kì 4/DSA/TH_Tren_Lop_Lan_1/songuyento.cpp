#include<bits/stdc++.h>
using namespace std;
int n;
vector<string> ans;
bool cmp(string a, string b)
{
	if(a.size() ==  b.size())
	  return a < b;
	return a.size() < b.size();
}
void sinh(string s)
{
	if(s.size() > n)
	  return;
	if(s.size() >= 4)
	{
		map<char, int> mp;
		for(char ch : s)
		  mp[ch]++;
		if(mp['2'] > 0 && mp['3'] >0 && mp['5'] > 0 && mp['7'] > 0 && s.back() != '2')
		  {
		  	ans.push_back(s);
		  }
		 
	}
	sinh(s + "2");
	sinh(s + "3");
	sinh(s + "5");
	sinh(s + "7");
}
int main ()
{
	cin>>n;
	sinh("");
	sort(ans.begin(), ans.end(), cmp);
	for(auto it : ans)
	  cout<<it<<endl;
}
