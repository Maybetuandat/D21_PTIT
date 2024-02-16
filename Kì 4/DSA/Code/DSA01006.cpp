#include<bits/stdc++.h>
using namespace std;
int n, visited[100], a[100];
void in()
{
	for(int i=1; i<=n; i++)
	   cout<<a[i];
	cout<<" ";
}
void trial(int i)
{
	for(int j=n; j>=1; j--)
	{
		if(visited[j] == 0)
		{
			a[i]=j;
			visited[j]=1;
			if(i == n)
			   in();
			else
			   trial(i+1);
			visited[j]=0;
		}
	}
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
	    cin>>n;
	    for(int i=1; i<=n; i++)
	      visited[i]=0;
		trial(1);
		cout<<endl;
	}
}
