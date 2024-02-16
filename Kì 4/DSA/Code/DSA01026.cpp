#include<bits/stdc++.h>
using namespace std;
int a[100], n;
void in()
{
	if(a[1] == 1)
		return;
	if(a[n] == 0 && a[n-1] == 0 && a[n-2] == 0)
	   return;
	for(int j=1; j<n; j++)
	   if(a[j] == a[j+1] && a[j] == 1)
	      return;
	for(int j=1; j<= n - 3 ; j++)
	   if(a[j] + a[j+1] + a[j+2] + a[j+3] == 0)
	      return;
	cout<<"8";
	for(int j=1; j<=n; j++)
		if(a[j] == 0)
		  cout<<"6";
		else
		   cout<<"8";
	cout<<"6";
	cout<<endl;
	
}
void trial(int i)
{
	for(int j=0; j<=1; j++)
	{
		a[i]=j;
		if(i == n)
		   in();
		else
		  trial(i+1);
	}
}
int main ()
{
	 cin>>n;
	 n-=2;
	trial(1);	
}
