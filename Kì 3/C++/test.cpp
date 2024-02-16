#include<bits/stdc++.h>
using namespace std;
void ct()
{
	int n;
	cin>>n;
	double tong=0;
	for(int i=1; i<=n; i++)
	{
		tong=(double) tong + (double)1/i; 
	}
	cout<<fixed<<setprecision(4)<<tong<<endl;
}
int main ()
{
	ct();
	return 0;
}
