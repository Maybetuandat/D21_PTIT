#include<bits/stdc++.h>
using namespace std;
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int Nmax = 1000009;
	vector<int> a(Nmax);
	a[1]=1;
	for(int i=2; i<= sqrt(Nmax); i++)
	{
		for(int j=2; j<= Nmax / i; j++)
		    a[i*j]=1;
	}
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		if(n < 4)
		  cout<<"-1"<<endl;
		else
		{
		bool kt=false;
		for(int i=2; i<= n / 2; i++)
		 {
			if(a[i] ==0 && a[n-i] == 0)
			{
			   cout<<i<<" "<<n-i<<endl;
			   kt=true;
			   break;
		    }
		 }
		 if(!kt)
		   cout<<"-1"<<endl;
	    } 
	}
}
