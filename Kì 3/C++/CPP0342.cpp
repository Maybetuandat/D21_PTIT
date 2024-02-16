#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		multiset<char> mse;
		int sum = 0;
		for(char x : s)
		{
			if (!isdigit(x))
			{
				mse.insert(x);
			}
			else 
			{
				sum += x - '0';
			}
		}
		for(auto x : mse)
			cout << x ;
		cout << sum;
		cout << endl;
	}
}

