//https://code.ptit.edu.vn/student/question/CPP0721
//doan con tang dai nhat

#include<bits/stdc++.h>
using namespace std;
void xuli(int n)
{
	int i,j,a[n+1],ans[n+1],res=INT_MIN;
	for(i=0; i<n; i++)
	{
		cin>>a[i];
	}
	for(i=0; i<n; i++)
	{
		ans[i]=1;
		for(j=0; j<i; j++)
		   if(a[j] < a[i])
		      ans[i]= max(ans[j]+1, ans[i]);
		if(ans[i] > res)
		  res = ans[i];
	}
	cout<<res<<endl;
}
void ct()
{
	int t;  cin>>t;
	while(t--)
	{
		int n; cin>>n;
		xuli(n);
	}
}
int main ()
{
	ct();
}
