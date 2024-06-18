#include<bits/stdc++.h>
using namespace std;
void ct()
{
	int dem[10]={0};
	int a,b;
	cin>>a>>b;
		for(int i=a; i<=b; i++)
		{
			int tmp = i;
			while(tmp > 0)
			{
				dem[tmp % 10]++;
				tmp /= 10;
			}
		}
		for(int i=0; i<=9; i++)
		   cout<<dem[i]<<" ";
		cout<<endl;
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
