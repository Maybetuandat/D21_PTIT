#include<bits/stdc++.h>
using namespace std;
#define Nmax 10000009
int isprime[Nmax] = {0};
typedef long long ll;
vector<int> prime;
void init()
{
	isprime[1] = 1;
	for(int i=2; i* i <= Nmax; i++)
	{
		if(!isprime[i])
		{
			prime.push_back(i);
				for(int j=2; i * j <= Nmax; j++)
			       isprime[i * j] = 1;
				
		}
		
	}
	
}
void ct()
{
	ll n; cin>>n;
	for(int x : prime)
	{
		int dem = 0;
		while(n % x == 0)
		{
			dem++;
			n /= x;
		}
		if(dem != 0)
		cout<<x<<" "<<dem<<"\n";
		if(n < x)
		  break;
	}
	
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin>>t;
	init();
	while(t--)
	{
		ct();
		cout<<endl;
	}
}

