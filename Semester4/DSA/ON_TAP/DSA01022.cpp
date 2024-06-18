#include<bits/stdc++.h>
using namespace std;
int n;
int ans[100];
int a[100];
int vs[100];
int ok;
int dem = 0;
bool check()
{
	for(int i=1; i<=n; i++)
	  if(ans[i] != a[i])
	    return false;
	return true;
}
void sinh(int i)
{
	if(ok)
	  return;
	for(int j=1; j<=n; j++)
	{
		if(!vs[j])
		{
			a[i] = j;
			vs[j] = 1;
			if(i == n)
			{
				dem++;
				if(check())
				{
					cout<<dem<<endl;
					ok = 1;
					return;
				}
			}
			else
			    sinh(i+1);
			vs[j]= 0;
		}
	}
}
void ct()
{
	 cin>>n;
	 ok = 0;
	dem = 0;
	memset(a, 0, sizeof(a));
	memset(vs,0,  sizeof(vs));
	for(int i=1; i<=n; i++)
	  cin>>ans[i];
	
	 sinh(1);	
}
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
