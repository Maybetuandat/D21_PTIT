//https://code.ptit.edu.vn/student/question/CPP0534
//S? THU?N NGH?CH GI?M D?N
#include<bits/stdc++.h>
using namespace std;
bool checkthuannghich(string s)
{
	int n=s.length();
	if(n==1)
	  return 0;
	for(int i=0; i<n/2; i++)
	{
		if(s[i] != s[n-i-1])
		   return 0;
	}
	return 1;
}
bool cmp(string a, string b)
{
	if(a.length() > b.length())
	   return 1;
	if(a.length() == b.length())
	{
		if(a>b)
		  return 1;
		else
		
		 return 0;
	}
	return 0;
}
void ct()
{
    string s;
    vector <string> ans;
    while(cin>>s)
    {
    	if(checkthuannghich(s) ) 
		    ans.push_back(s);
    }
    sort(ans.begin(), ans.end(), cmp);
    int i=0,dem=1;
    while(i<ans.size())
    {
    	int j=i+1;
    	while(    j<ans.size()  &&     ans[j] == ans[i] )
    	    j++;
    	cout<<ans[i]<<" "<<j-i<<endl;
    	i=j;
	}
}
int main ()
{
    ct();
}
