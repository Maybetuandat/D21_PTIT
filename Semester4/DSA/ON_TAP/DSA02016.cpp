#include<bits/stdc++.h>
using namespace std;
int dem = 0;
int n;
int hang[30], xuoi[30], nguoc[30];
void dq(int i)
{
	
	for(int j=1; j<=n; j++)
	{
		if(!hang[j] && !xuoi[i-j+n] && !nguoc[i+j-1])
		{
			hang[j] = 1;
			xuoi[i-j+n] = 1;
			nguoc[i+j-1] = 1;
			if(i == n)
			  dem++;
			else
			    dq(i+1);
			hang[j] = 0;
			xuoi[i-j+n] = 0;
			nguoc[i+j-1] = 0;
		}
	}
}
void ct()
{
	cin>>n;
	memset(hang, 0, sizeof(hang));
	memset(xuoi, 0, sizeof(xuoi));
	memset(nguoc, 0, sizeof(nguoc));
	dem = 0;
	dq(1);
	cout<<dem<<endl;
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
