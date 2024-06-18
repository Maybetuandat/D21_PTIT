#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void ct()
{
		int n,m; cin>>n>>m;
		int a[10] = {0};
		for(int i=0; i<m; i++)
		{
			int x; cin>>x;
			a[x]++;
		}
		int diem[10]={0};
		diem[9] = 6;
		diem[8] = 7;
		diem[7] = 3;
		diem[6] = 6;
		diem[5] = 5;
		diem[4] = 4;
		diem[3] = 5;
		diem[2] = 5;
		diem[1] = 1;
		int dem[10] = {0};
		while(n != 0)
		{
			for(int i=9; i>=1; i--)
			{
				if(a[i] != 0)
				{
					dem[i] = n / diem[i];
					n = n % diem[i];
				}
				if(n == 0)
				  break;
			}
		}
		for(int i=9; i>=1; i--)
		{
			if(dem[i] != 0)
			{
				for(int j=0; j<dem[i]; j++)
				  cout<<i;
			}
		}

		cout<<endl;
}
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t = 1;
	while(t--)
	{
		ct();
	}
	return 0;
}
