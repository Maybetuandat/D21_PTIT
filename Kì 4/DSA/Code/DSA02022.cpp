#include<bits/stdc++.h>
using namespace std;
int a[100];
void in()
{
	if(a[5] == 0)
	   return;
	if(a[3] == 1)
	  return;
	if(a[1] == 0 && a[2] == 0)
	  return;
	if(a[3] == 0 && a[4] == 0)
	  return;
	for(int i=1; i<=2; i++)
	   if(a[i] == 0)
	     cout<<"0";
		else
		  cout<<"2";
	cout<<"/";
	for(int i=3; i<=4; i++)
	   if(a[i] == 0)
	     cout<<"0";
		else
		  cout<<"2";
	cout<<"/";
	for(int i=5; i<=8; i++)
	   if(a[i] == 0)
	     cout<<"0";
		else
		  cout<<"2";
	cout<<" ";
}
void sinh(int i)
{
	for(int j=0; j<=1; j++)
	{
		a[i] = j;
		if(i == 8)
		  in();
		else
		   sinh(i+1);
	}
}
int main ()
{
	sinh(1);
}
