#include<bits/stdc++.h>
using namespace std;
void xuli(int n, int m)
{
	double a[n+3],  b[m+3];
	int x[n], y[m];
	for(int i=0; i<n; i++)
	  cin>>x[i];
	for(int i=0; i<m; i++)
	   cin>>y[i];
	
	int dem1=0, dem2=0;
	long long dem=0;
	for(int i=0; i<n; i++)
	{
		if( x[i] != 0 && x[i] != 1)
		{
			a[dem1] = (double ) (x[i] / (double) log(x[i]));
			dem1++;
	    }
	}
	for(int i=0; i<m; i++)
	{
		if(y[i] == 0 || y[i] == 1)
		{
			dem+=dem1;
		}
		else
		{
			
			b[dem2]= (double) (y[i] / (double)log(y[i]));
			dem2++;
		}
		
	}
	sort(a, a + dem1);
	sort(b , b + dem2);
	for(int i=0; i<dem1; i++)
	{
		int vt = lower_bound(b, b + dem2, a[i]) - b;
		while(b[vt] <= a[i] && vt < dem2)
	        vt++;
		dem+= dem2 - vt   ; 
	}
	dem1=0; int  dem0=0;
	for(int i=0; i<m; i++)
	  if(y[i] == 0)
	     dem0++;
	for(int i=0; i<n; i++)
	  if(x[i] == 1)
	     dem1++;
	dem+= dem1 * dem0;
	cout<<dem<<endl;
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	int t ;  cin>>t;
	while(t--)
	{
		int n,m; cin>>n>>m;
		xuli(n,m);
	}
}
