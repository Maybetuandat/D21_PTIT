//https://code.ptit.edu.vn/student/question/CPP0727

#include<bits/stdc++.h>
using namespace std;
typedef __int128 t128;
void ct()
{
	long long a,b,c;
	int t; cin>>t;
	while(t--)
	{
		cin>>a>>b>>c;
		t128 p=1000000000000000000, tich, du;
		tich = (t128)  a * b;
		du = (t128) tich % c;
		long long r1= du / p;
		long long r2 = du % p;
		if( r1 == 0)
		   cout<<r2<<endl;
		else
		  cout<<r1<<setw(18) << setfill('0')<<r2<<endl;
	}
}
int main()
{
	ct();
}
