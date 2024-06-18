//https://code.ptit.edu.vn/student/question/CPP0727
//tong lon nhat cua day con khong ke nhau
#include<bits/stdc++.h>
using namespace std;
void xuli(int n)
{
	vector<int> a(n);
	for(int &x : a)
	   cin>>x;
	vector<int> res(n);
	res[0]=a[0];
	int i;
	long long ans=INT_MIN;
	res[1]=max(a[0],a[1]);
	for(i=2; i<n; i++)
	{
		res[i]=res[i-2]+a[i];
		res[i]=max(res[i], res[i-1]);
		if(res[i] > ans)
		  ans=res[i];
	}
	cout<<ans<<endl;
}
void ct()
{
	int t;cin>>t;
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
