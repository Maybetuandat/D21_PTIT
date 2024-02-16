#include<bits/stdc++.h>
using namespace std;
int a[100], b[100];
int check(int i, int n)
{
	if(a[i] == b[i] || a[i] == b[n-i-1])
	       return 1;
	return 0;
}
void test()
{
	int n; cin>>n;
	for(int i=0; i<n; i++)
	{
	 	cin>>a[i];
		b[i] = a[i]; 	
	}
	sort(b, b + n);
	for(int i=0; i<n; i++)
	{
		if(check(i,n) == 0)
		{
			cout<<"No"<<endl;
			return;
		}
	}
	cout<<"Yes"<<endl;
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		test();
		}	
}
