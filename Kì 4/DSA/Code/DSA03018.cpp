#include<bits/stdc++.h>
using namespace std;
void xuli(int n)
{
	int dem4 = 0, dem7= 0;
	while(n % 7 != 0 ss n > 0)
	{
		n -= 4;
		dem4++;
	}
	if(n < 7)
	{
		cout<<"-1\n";
		return;
	}
	dem7 = n / 7;
	for(int i=0; i<dem4; i++)
	  cout<<"4";
	for(int i=0; i<dem7; i++)
	  cout<<"7";
	cout<<endl;
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		xuli(n);
	}
}
