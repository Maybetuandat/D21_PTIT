//https://code.ptit.edu.vn/student/question/CPP0730
//tong lon nhat cua day con lien tuc

#include<bits/stdc++.h>
using namespace std;
void xuli(int n)
{
	//vector<int > a(n);
	int a[n];
	int i,isbool =0;
	for(i=0; i<n; i++)
	{
		cin>>a[i];
		if(a[i] > 0)
		  isbool =1;
	}
	if( isbool == 0)
	{
		cout<<*max_element(a, a+n) <<endl;
		return;
	}
	long long tong=0,ans=a[0];
	for( i=0; i<n; i++)
	{
		if(tong + a[i] < 0)
		  tong=0;
		else
		{
			tong=tong+a[i];
		    ans=max(ans, tong);
		}
	}
	cout<<ans<<endl;
}
void ct()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		xuli(n);
	}
}
int main ()
{
	ios_base::sync_with_stdio(0);
	ct();
	return 0;
}
