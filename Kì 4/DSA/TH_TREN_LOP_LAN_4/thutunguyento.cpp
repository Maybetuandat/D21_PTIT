#include<bits/stdc++.h>
using namespace std;
vector<string> ans;
int c[30], dem = 0, k, n;
int snt[200000], Nmax = 200000;
void init()
{
	memset(snt, sizeof(snt), 0);
	snt[1] = 1;
	for(int i = 2; i<= sqrt(Nmax); i++)
	{
		for(int j=2; j<= Nmax / i; j++)
		   snt[i*j] = 1;
	}
}
void in()
{
	dem++;
	if(snt[dem])
	  return;
	cout<<dem<<": ";
	for(int i=1; i<= k; i++)
	  cout<<c[i]<<" ";
	cout<<endl;
}
void sinh(int i)
{
	for(int j = c[i-1] + 1; j<= n - k + i; j++)
	{
		c[i] = j;
		if(i == k)
		  in();
		else
		   sinh(i+1);
	}
}
int main ()
{
    cin>>n>>k;
    init();
	sinh(1);
}
