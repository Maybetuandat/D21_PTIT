#include<bits/stdc++.h>
using namespace std;
void chuyen(int n, char a, char b)
{
	cout<<a<<" -> "<<b<<endl;
}
void thaphn(int n, char a, char b, char c)
{
	if(n == 1)
	  chuyen(1,a,c);
	else
	{
		thaphn(n-1, a , c, b);
		chuyen(n, a, c);
		thaphn(n-1, b,a,c);
		
	}
}
int main ()
{
	int n; cin>>n;
	char a='A', b='B', c='C';
	thaphn(n,a,b,c);
}
