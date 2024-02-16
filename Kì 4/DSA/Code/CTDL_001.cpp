#include<bits/stdc++.h>
using namespace std;
int mid,n, a[100];
void in()
{
	if( n % 2 == 0)
	
    {
		for(int k=1; k<= mid; k++)
		  cout<<a[k]<<" ";
		for(int k= mid; k>=1; k--)
		  cout<<a[k]<<" ";
		cout<<endl;
	}	
	else
	{
		
		for(int k=1; k<= mid; k++)
		      cout<<a[k]<<" ";
		cout<<"0 ";
		for(int k= mid; k>=1; k--)
		  cout<<a[k]<<" ";
		cout<<endl;
		for(int k=1; k<= mid; k++)
		  cout<<a[k]<<" ";
		cout<<"1 ";
		for(int k= mid; k>=1; k--)
		  cout<<a[k]<<" ";
		cout<<endl;	
	}
	
	    
}
void trial(int i)
{
	for(int j=0; j<=1; j++)
	{
		a[i]=j;
		if(i == mid)
		  in();
		else
		  trial(i+1);	
	}	
}

int main ()
{
	cin>>n;
	mid = n / 2;
	trial(1);
}
