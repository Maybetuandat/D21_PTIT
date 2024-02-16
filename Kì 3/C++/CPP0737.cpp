//https://code.ptit.edu.vn/student/question/CPP0737

//Day Con Trung Binh Lon Nhat

#include<bits/stdc++.h>

using namespace std;


void xuli(int n, int k)
{
	vector<int> ans(n+3);
	int i,vt;
	for(i=0; i<n; i++)
	   cin>>ans[i];
	int tong=0,max=INT_MIN;
	for(i=0; i<k; i++)
	{
		tong+=ans[i];
	}
	for(i=1; i<n-k+1; i++)
	{
		tong=tong-ans[i-1];
		tong=tong+ans[i+k-1];
		if(tong > max)
		{
			max=tong;
			vt=i;
		}
	}
	for(i=vt; i<vt+k; i++)
	   cout<<ans[i]<<" ";
	cout<<endl;
	
}


void ct()
{
	int t; cin>>t;
	while(t--)
	{
		int n,k; cin>>n>>k;
		xuli(n,k);
	}
}
int main ()
{
	ct();	
}
