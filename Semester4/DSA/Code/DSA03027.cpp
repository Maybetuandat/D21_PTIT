#include<bits/stdc++.h>
using namespace std;
void ct()
{
	int n,x ;cin>>n;
	long long sum = 0;
	for(int i=0; i<n; i++)
	{
		cin>>x;
		if(x > 0)
		  sum += x * 2;
	}
	
	cout<<sum<<endl;
}
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t = 1; 
	while(t--)
	{
		ct();
	}
}
