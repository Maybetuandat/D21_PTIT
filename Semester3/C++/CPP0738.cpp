//https://code.ptit.edu.vn/student/question/CPP0738
//Cong mot va nhan doi


#include<bits/stdc++.h>
using namespace std;
void xuli(int n)
{
		vector<int> ans(n);
		for(int &x : ans)
		   cin>>x;
		int res=0,i; 
		while(1)
		{
			int d=0;
			for(i=0; i<n; i++)
			{
				if(ans[i] % 2 != 0)
				{
					ans[i]--;
					res++;
				}
				if(ans[i] == 0)
				   d++;
			}
			if(d == n)
			   break;
			for(int &x : ans)
			  x=x/2;
			res++;
		}
	cout<<res<<endl;
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
int main()
{
	ct();
}
