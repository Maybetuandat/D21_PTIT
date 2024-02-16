#include<bits/stdc++.h>
using namespace std;
void xuli(int n)
{
	int a[n], b[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		b[i]=a[i];	
	}
	sort(a, a+n);
	int vt1, vt2;
	for(int i=0; i<n; i++)
	  if(a[i] != b[i])
	  {
	  	vt1=i;
	  	break;
	  }
	for(int i=n-1; i>= 0; i--)
	  if(a[i] != b[i])
	  {
	  	vt2=i;
	  	break;
	  }
	if(vt1 != vt2)
	  cout<<vt1 + 1<<" "<<vt2 + 1<<endl;
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
