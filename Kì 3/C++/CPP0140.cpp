#include<bits/stdc++.h>
using namespace std;
int main ()
{
	long long a[100];
	a[1]=6;
	a[2]=28;
	a[3]=496;
	a[4]=8128;
	a[5]=33550336;
	a[6]=8589869056;
	a[7]=137438691328;
	int t;
	long long n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int kt=0;
		for(int i=1; i<=7; i++)
		{
			if( n == a[i])
			{
				kt = 1;
				break;
			}
		}
		cout<<kt<<endl;
	}
}
