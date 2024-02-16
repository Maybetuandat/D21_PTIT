#include<bits/stdc++.h>
using namespace std;
void ct()
{
	string s; cin>>s;
	int a[26] = {0};
	int maxx=0;
	for(char ch : s)
	{
		a[ch - 'a'] ++;
		
	}
	for(int i=0; i<26; i++)
	  if(a[i] > maxx)
	    maxx=a[i];
	
	if(maxx <= (s.length() + 1) / 2)
	  cout<<"1\n";
	else
	  cout<<"-1\n";
}
int main ()
{
	 ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin>>t;
    while(t--)
    {
    	ct();
	}
}
