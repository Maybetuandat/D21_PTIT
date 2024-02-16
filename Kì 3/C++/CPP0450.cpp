#include<bits/stdc++.h>
using namespace std;
int main ()
{
	long long  t,i,x,n;
	cin>>t;
	while( t--)
	{
		cin>>n;
		set<long long > ss;
		bool kt=false;
		for(i=0; i<n; i++)
		{
			cin>>x;
			if( ss.count(x) != 0)
			{
				cout << x <<endl;
				kt=true;
				break;
			}
			else
			  ss.insert(x);
		}
		if( kt == false)
		  cout<<"-1" <<endl;
		if( kt)
		{
			for(int j=i+1; j<n; j++)
			  cin>>x;
		}
	}
}
