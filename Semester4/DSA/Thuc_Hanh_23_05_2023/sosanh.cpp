#include<bits/stdc++.h>
using namespace std;
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n; cin>>n;
	vector<string> ans;
	map<string, int> mp;
	string s1, s2;
	char ch;
	cin>>s1>>ch>>s2;
	if(ch ==  '>')
	{
		mp[s1] = n;
		mp[s2] = n-1;
	}
	else
	{
		mp[s1] = n-1;
		mp[s2] = n;
	}
	for(int i=1; i<n; i++)
	{
			cin>>s1>>ch>>s2;
			if(mp[s1] == 0 && mp[s2] == 0)
			{
				string cmp = "";
				cmp = s1 + " " + ch + " "+ s2;
				ans.push_back(cmp);
			}
			else
			{
				if(mp[s1] != 0 && mp[s2] != 0)
				{
					  if ((ch == '>' && mp[s1] < mp[s2]) || (ch == '<' && mp[s1] > mp[s2]))
					  {
					  	cout<<"impossible\n";
					  	return 0;
					  }
					
				}
				else if(mp[s1] == 0)
					{
						if(ch == '>')
						  mp[s1] = mp[s2] + 1;
						else
						   mp[s1] = mp[s2] - 1;
						   
					}
					else if(mp[s2] == 0)
						{
							if(ch == '>')
							  mp[s2] = mp[s1] - 1;
							else
							  mp[s2] = mp[s1] + 1;
						}
			}
	}
	string ch1;
	vector<string> res;
		for(int i=0; i<ans.size(); i++)
	{
		string s = ans[i];
		stringstream ss(s);
		string cmp;
		vector<string> adu;
		while(ss >> cmp)
		  adu.push_back(cmp);
		s1 = adu[0];
		s2 = adu[2];
		ch1 = adu[1];
			if(mp[s1] == 0 && mp[s2] == 0)
			{
				string cmp = "";
				cmp = s1 +" " + ch + " "+ s2;
				res.push_back(cmp);
			}
			else
			{
				if(mp[s1] != 0 && mp[s2] != 0)
				{
					  if ((ch1 == ">" && mp[s1] < mp[s2]) || (ch1 == "<" && mp[s1] > mp[s2]))
					  {
					  	cout<<"impossible\n";
					  	return 0;
					  }
					
				}
				else if(mp[s1] == 0)
					{
						if(ch1 == ">")
						  mp[s1] = mp[s2] + 1;
						else
						   mp[s1] = mp[s2] - 1;
						   
					}
					else if(mp[s2] == 0)
						{
							if(ch1 == ">")
							  mp[s2] = mp[s1] - 1;
							else
							  mp[s2] = mp[s1] + 1;
						}
			}
	}
	ans.clear();
	if(res.size() == 0)
	  break;
	else	
    	for(string x : res)
	       ans.push_back(x);
	res.clear();
	
	
		for(int i=0; i<ans.size(); i++)
	{
		string s = ans[i];
		stringstream ss(s);
		string cmp;
		vector<string> adu;
		while(ss >> cmp)
		  adu.push_back(cmp);
		s1 = adu[0];
		s2 = adu[2];
		ch1 = adu[1];
			if(mp[s1] == 0 && mp[s2] == 0)
			{
				string cmp = "";
				cmp = s1 +" " + ch + " "+ s2;
				res.push_back(cmp);
			}
			else
			{
				if(mp[s1] != 0 && mp[s2] != 0)
				{
					  if ((ch1 == ">" && mp[s1] < mp[s2]) || (ch1 == "<" && mp[s1] > mp[s2]))
					  {
					  	cout<<"impossible\n";
					  	return 0;
					  }
					
				}
				else if(mp[s1] == 0)
					{
						if(ch1 == ">")
						  mp[s1] = mp[s2] + 1;
						else
						   mp[s1] = mp[s2] - 1;
						   
					}
					else if(mp[s2] == 0)
						{
							if(ch1 == ">")
							  mp[s2] = mp[s1] - 1;
							else
							  mp[s2] = mp[s1] + 1;
						}
			}
	}
	ans.clear();
	if(res.size() == 0)
	  break;
	else	
    	for(string x : res)
	       ans.push_back(x);
	res.clear();
		for(int i=0; i<ans.size(); i++)
	{
		string s = ans[i];
		stringstream ss(s);
		string cmp;
		vector<string> adu;
		while(ss >> cmp)
		  adu.push_back(cmp);
		s1 = adu[0];
		s2 = adu[2];
		ch1 = adu[1];
			if(mp[s1] == 0 && mp[s2] == 0)
			{
				string cmp = "";
				cmp = s1 +" " + ch + " "+ s2;
				res.push_back(cmp);
			}
			else
			{
				if(mp[s1] != 0 && mp[s2] != 0)
				{
					  if ((ch1 == ">" && mp[s1] < mp[s2]) || (ch1 == "<" && mp[s1] > mp[s2]))
					  {
					  	cout<<"impossible\n";
					  	return 0;
					  }
					
				}
				else if(mp[s1] == 0)
					{
						if(ch1 == ">")
						  mp[s1] = mp[s2] + 1;
						else
						   mp[s1] = mp[s2] - 1;
						   
					}
					else if(mp[s2] == 0)
						{
							if(ch1 == ">")
							  mp[s2] = mp[s1] - 1;
							else
							  mp[s2] = mp[s1] + 1;
						}
			}
	}
	ans.clear();
	if(res.size() == 0)
	  break;
	else	
    	for(string x : res)
	       ans.push_back(x);
	res.clear();
	
	cout<<"possible"<<endl;
}

