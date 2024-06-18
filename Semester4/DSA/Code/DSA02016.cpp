#include<bits/stdc++.h>
using namespace std;
int cot[20], xuoi[20], nguoc[20], ans[20], n, dem;
void ql(int i)
{
	for(int j=1; j<=n; j++)
	{
		if(cot[j] == 0 && xuoi[i - j + n] == 0 && nguoc[i + j - 1] == 0)
		{
			ans[i] = j;
			cot[j] = 1;
			xuoi[i - j + n] = 1;
			nguoc[i + j - 1] = 1;
			if(i == n)
			{
				dem++;
			//	return;
			}
			else
			  ql(i+1);
			cot[j] = 0;
			xuoi[i - j + n] = 0;
			nguoc[i + j - 1] = 0;
		}
	}
}
void ct()
{
	memset(cot, sizeof(cot), 0);
	memset(xuoi, sizeof(xuoi), 0);
	memset(nguoc, sizeof(nguoc), 0);
	 cin>>n;
	 dem=0;
	ql(1);
	cout<<dem<<endl;
}
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
		int t; cin>>t;
		while(t--)
		{
			ct();
		}
}
