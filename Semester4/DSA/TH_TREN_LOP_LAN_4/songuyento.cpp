#include<bits/stdc++.h>
using namespace std;
vector<string> ans;
	int n, dem2, dem3,  dem5, dem7;
bool cmp(string a, string b)
{
	if(a.size() == b.size())
	  return a<b;
	return a.size() < b.size();
}
void sinh(string s)
{
	if(s.size() > n)
		return;
	if(s.back() == '2')
	  dem2++;
	if(s.back() == '3')
	  dem3++;
	if(s.back() == '5')
	  dem5++;
	if(s.back() == '7')
	  dem7++;
	if(s.size() >= 4)
	{
		if(dem2 > 0 && dem3 > 0 && dem5 > 0 && dem7 > 0 && s.back() != '2')
			ans.push_back(s);
		
		
		
	}
	sinh(s + "2");
	sinh(s + "3");
	sinh(s + "5");
	sinh(s + "7");
	if(s.back() == '2')
	  dem2--;
	if(s.back() == '3')
	  dem3--;
	if(s.back() == '5')
	  dem5--;
	if(s.back() == '7')
	  dem7--;
}
int main ()
{
 	cin>>n;
 	dem2=dem3=dem5=dem7=0;
	sinh("");
	sort(ans.begin(), ans.end(), cmp);
	for(string x : ans)
	  cout<<x<<endl;
}
