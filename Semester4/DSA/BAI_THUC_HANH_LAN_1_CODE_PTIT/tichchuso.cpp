#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void ct()
{
	ll n;
	cin>>n;
	if(n < 10)
	{
		cout<<n<<endl;
		return;
	}
	int dem[10] ={0};
		for(int i=9; i>= 2; i--)
		{
			while( n % i == 0 && n > 1)
			{
				dem[i]++;
				n = n / i;
			}
		}
	if(n == 1)
	{
		for(int i=2; i<=9; i++)
		{
			if(dem[i] > 0)
			 for(int j=1; j<=dem[i]; j++)
			   cout<<i;
		}
		cout<<endl;
	}
	else
	{
		cout<<"-1\n";
	}
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
