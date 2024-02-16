#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	cin.ignore();
	while(t--)
	{
		string s1;
		getline(cin, s1);
		
		set<string> se1;
		stringstream ss1(s1);
		string tmp1;
		while(ss1 >> tmp1)
		{
			se1.insert(tmp1);
		}
		
		
		string s2;
		getline(cin, s2);
		set<string> se2;
		stringstream ss2(s2);
		string tmp2;
		while(ss2 >> tmp2)
		{
			se2.insert(tmp2);
		}
		
	
		
		for(auto x : se1)
		{
			if(se2.find(x) == se2.end())
				cout << x << " ";
		}
		cout << endl;
	}
}

