#include<bits/stdc++.h>
using namespace std;
void ct()
{
	int n; cin>>n;
	int a[n];
	for(int &x : a)
	  cin>>x;
	int check[n] = {0};
	int i =0, dem = 0 ;
	while(i < n - 1)
	{
		if(   (!check[i] && !check[i+1]) && (a[i]  + a[i+1]) % 2 == 0 )
		{
			check[i] = 0; check[i] = 0;
			i += 2;
			dem+= 2;
		}
		else
		  i++;
	}
	cout<<n-dem<<endl;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t = 1; 
	while(t--)
	{
		ct();
	}
}

