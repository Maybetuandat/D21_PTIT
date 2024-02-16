#include<bits/stdc++.h>
using namespace std;
int Nmax = 10000003;
int isprime[10000003] = {0};
typedef long long ll;
vector<int> prime;
void init()
{
	
	
	isprime[1] = 1;
	for(int i=2; i<= sqrt(Nmax); i++)
	{
		for(int j=2; j<= Nmax / i; j++)
		    if( !isprime[i])
		    	isprime[i * j] = 1;
			
    }
    for(int i=2; i<= Nmax; i++)
      if(isprime[i] == 0)
        prime.push_back(i);
}
void ct()
{
    ll n; cin>>n;
    for(int i=0; i< prime.size(); i++)
    {
        int dem = 0;
        if(n < prime[i])
          break;
        if(n == 1)
          break;
        while(n % prime[i] == 0)
        {
             dem++;
              n = n / prime[i];
        }
        if(dem != 0)
          cout<<prime[i] <<" "<<dem<<endl;
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

