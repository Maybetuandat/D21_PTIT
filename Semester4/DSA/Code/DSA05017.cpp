#include<bits/stdc++.h>
using namespace std;
// thuat toan: ta se mac dinh so a[i] la phan tu dung giua cua day bitonic, ta se tim tu a[i] ve truoc day so tang dai nhat va tu a[i] den het day so giam dai nhat
// ket qua la max(l[i] + r[i] - a[i]) do a[i] duoc cong hai lan
void ct()
{
	int n; cin>>n;
	int a[n];
	for(int &x : a)
	   cin>>x;
	int l[n], r[n];
	for(int i=0; i<n; i++)
	{
		l[i] = a[i];
		for(int j=0; j<i; j++)
		{
			if(a[j] < a[i])
			  l[i] = max(l[i], l[j ] + a[i]);
		}
	}
	for(int i=n-1; i>=0; i--)
	{
		r[i] = a[i];
		for(int j=n-1; j> i; j--)
		{
			if(a[j] < a[i])
			   r[i] = max(r[i], r[j] + a[i]);
		}
	}
	int maxx = 0;
	for(int i=0; i<n; i++)
		maxx = max(maxx, l[i] + r[i] - a[i]);
		
	
	cout<<maxx<<endl;
}
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
