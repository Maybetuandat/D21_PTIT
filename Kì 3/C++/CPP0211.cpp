//thuat toan: chung ta can xay dung mot mang b, o vi tri b[i] bat ki se chua gia tri lon nhat tu i den n -1 
// tiep theo su dung thuat toan chat nhi phan de tim kiem phan tu dai nhat thoa man ycbt


#include<bits/stdc++.h>
using namespace std;
void xuli(int n)
{
	vector<int> a(n);
	vector<int> b(n+1);
	for(int &x: a )
	  cin>>x;
	for(int i= n- 1; i>=0; i--)
	   b[i] = max( b[i+1], a[i]);
	int ans=INT_MIN;
	for(int i=0; i<n; i++)
	{
		int left=i+1, right=n-1;
		while(left <= right)
		{
			int mid= (left + right) / 2;
			if( b[mid] >= a[i])
			{
				left=mid+1;
				ans=max(ans, mid - i);
			}
			else
			    right=mid-1;
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
	cin.tie(0);
	cout.tie(0);
	ct();
	return 0;    
}
