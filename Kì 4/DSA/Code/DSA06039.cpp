#include<bits/stdc++.h>
using namespace std;
void xuli(int n)
{
	vector<int> a(n);
	set<int> st;
	int minn = n, vt;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		if( st.count(a[i]) != 0)
		{
			for(int j=i-1; j>=0; j--)
			{
				if(a[i] == a[j])
				{
					vt=j;
					break;
				}
			}
			if(vt < minn)
				minn=vt;
		}
		else
		    st.insert(a[i]);
	}
	if(minn != n)
	cout<<a[minn]<<endl;
	else
	  cout<<"NO\n"<<endl;
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		xuli(n);
	}
}
