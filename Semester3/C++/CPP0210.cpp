#include<bits/stdc++.h>

using namespace std;

int max(int a, int b)
{
	if(a > b)
		return a;
	else return b;
}

int min(int a, int b)
{
	if(a > b)
		return b;
	else return a;
}


int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[n];
		for(int i=0; i< n; i++)
			cin >> a[i];
		int res = -1e9;
		int min_val = a[0];
		for(int i = 0; i<n; i++)
		{
			if(a[i] > min_val)
			{
				res = max(res, a[i] - min_val);
			}
			min_val = min(a[i], min_val);
		}
		
		if(res == -1e9)
			cout << "-1" <<endl;
		else cout << res << endl;
	}
}

