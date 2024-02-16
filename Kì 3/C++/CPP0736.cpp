//https://code.ptit.edu.vn/student/question/CPP0736


//day con lien tuc nho nhat

#include<bits/stdc++.h>
using namespace std;
void xuli(int n, int k)
{
	vector<int> a(n);
	for(int &x : a)
	   cin>>x;
	int l=0,r=0,ans=n+1;
	long long tong=0;
	while(r < n)
	{
		while( tong <= k && r < n )
		{
		
			tong=tong+a[r];
			r++;
		}
		while( tong > k && l < r)
		{
			if( r - l  < ans)
			   ans=r-l;

		   tong=tong-a[l];
			l++;
			
		}
	}
	if( ans == n +1)
	  cout<<"-1\n";
	else
	   cout<<ans<<endl;
    
}
void ct()
{
	int t; cin>>t;
	while(t--)
	{
		int n,k; cin>>n>>k;
	//	k=k<<1;
		xuli(n,k);
	}
}
int main ()
{
	ct();
}
