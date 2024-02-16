#include<bits/stdc++.h>
using namespace std;
int main ()
{
	long long  t,i,n,x;
	cin >>t;
	
	while( t--)
	{
		cin >>n;
		set<long long >ss;
		for(i=0; i<n-1; i++)
		{
			cin>>x;
			ss.insert(x);
		}
		long long min=1;
		bool kt=false;
		for(long long  x : ss)
		{
			if( x == min)
				min++;
			else
			{
				cout<<min<<endl;
				kt=true;
				break;
			}
		}
		if( kt == false)
		  cout<<*ss.end()+1 <<"\n";
	}
}
