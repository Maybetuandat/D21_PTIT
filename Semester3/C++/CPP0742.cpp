//https://code.ptit.edu.vn/student/question/CPP0742
//doi cho it nhat
#include<bits/stdc++.h>
using namespace std;
void xuli(int n)
{
	pair<int , int > a[n];
	int i;
	for( i=0; i<n; i++)
	{
		cin>>a[i].first;
		a[i].second=i;
	}
	
	
	sort(a, a + n) ;
	
	vector<bool> ss(n, false);
	
	int dem=0;
	
	
	for(i=0; i<n; i++)
	{
		int cnt=0;
		if(ss[i] == true)
		  continue;
		else
		{
			int j=i;
			while( ! ss[j] )
			{
				cnt++;
		     	ss[j]=true;
		     	j=a[j].second;
		    
			}
			
		}
		if( cnt > 0)
		   dem=dem+cnt-1;
	}
	cout<<dem<<endl;
	
}
void ct()
{
	int t; cin>>t;
	while(t--)
	{
		int n;cin>>n;
		xuli(n);
		
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ct();
}
