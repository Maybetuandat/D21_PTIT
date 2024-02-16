#include<bits/stdc++.h>
using namespace std;
void ct()
{
	int k ; cin>>k;
	string s; cin>>s;
	for(int i=0; i<s.length() - 1; i++)
	{
		if(k == 0)
		  break;
		char c='0';
		for(int j = i+1; j<s.length(); j++)
		   if(s[j] > c)
		       c= s[j];
		
		string index = s, res;
		for(int j = i+1; j<s.length(); j++)
		{
			if(s[j] == c)
			{
				swap(index[i], index[j]);
				res = max(index, s);
				index = s;
			}
		}
		 
		s = res;
		k--;
		
			
	}	
	cout<<s<<endl;
}
int main ()
{
	int t;   cin>>t;
	while(t--)
	{
		ct();
	}
}
