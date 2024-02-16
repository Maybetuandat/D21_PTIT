#include<bits/stdc++.h>
using namespace std;
void ct()
{
	int i,x,n=0;
	int dem[100000],a[100000];
	while(cin >>a[n] )
	{
		
		dem[a[n]]++;
		n++;
	}
	int check[100000]={0};
	for(i=0; i<n; i++)
	{
		if(check[a[i]] == 0)
		{
			cout<<a[i]<<" "<<dem[a[i]]<<endl;
			check[a[i]]=1;
			
		}
	}
}
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ct();
	return 0;
}
