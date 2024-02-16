#include<bits/stdc++.h>
using namespace std;
void ct()
{
	int d; cin>>d;
	string s; cin>>s;
	map<char, int> mp;
	int maxx=0;
	for(char ch : s)
		mp[ch]++;
	for(auto it : mp)
	  if(it.second > maxx)
	    maxx=it.second;
	
	if(maxx <= (ceil((float) s.length() / d )))
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
