#include<bits/stdc++.h>
using namespace std;
void xuli(int n, int m)
{
	int i,j;
	int a[109][109];
	for(i=1; i<=n; i++)
	     {    
		   for(j=1; j<=m; j++)
		      cin>>a[i] [j];
         }
	int tg,kt=min(n,m) / 2;
	int hang1=1,hang2=n,cot1=1,cot2=m,x=1;
	while( x <=kt )
	{
		tg=a[x]  [x];
		for(i=hang1; i<hang2; i++)
		{
			a[i][cot1]=a[i+1][cot1];
		}
		for(i=cot1; i<cot2; i++)
		{
			a[hang2][i]=a[hang2][i+1];
		}
		for(i=hang2; i>hang1; i--)
		{
			a[i][cot2]=a[i-1][cot2];
		}
		for(i=cot2; i>cot1+1; i--)
		{
			a[hang1][i]=a[hang1][i-1];
		}
		a[hang1][cot1+1]=tg;
		x++;
		hang1++;
		cot1++;
		hang2--;
		cot2--;
	}
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=m; j++)
		cout<<a[i][j]<<" ";
		
	}
		cout<<endl;

}
void ct()
{
	int t,n,m;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		xuli(n,m);
	}
}
int main ()
{
	ct();
}
