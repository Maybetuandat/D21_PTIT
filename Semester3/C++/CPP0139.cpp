#include<bits/stdc++.h>
using namespace std;
#define Nmax 100009
vector<int> a(Nmax);
void Init()
{
	a[1]=1;
	for(int i=2; i<=sqrt(Nmax); i++)
	{
		if(a[i] == 0)
		{
		
		  for(int j=2; j<=Nmax /i; j++)
		     a[i*j]=1;
	    }
	}
	
}
int tongcs(int n)
{
	int tong=0;
	while(n != 0)
	{
		tong+= n % 10;
		n/=10;
	}
	return tong;
}
void xuli(int n)
{
	int sum=0, sum1=tongcs(n);
	int i=2;
	while(i<=n)
	{
		if( n % i == 0   && a[i] == 0)
		{
			while( n % i == 0)
			{
				sum+=tongcs(i);
				n = n / i;
			}
			if(a[n] == 0)
			{
				sum+=tongcs(n);
				break;
			}
		}
		i++;
	}
	//cout<<sum<<endl;
	if(sum == sum1)
	   cout<<"YES\n";
	else
	  cout<<"NO\n";
}
void ct()
{
	int t; cin>>t;
	Init();
	int n;
	while(t--)
	{
		cin>>n;
		if(a[n] == 0)
		   cout<<"NO\n";
		else
	     	xuli(n);
	}
}
int main ()
{
	ct();
	return 0;
}
