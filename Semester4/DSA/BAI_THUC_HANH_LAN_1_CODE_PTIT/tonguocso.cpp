#include<bits/stdc++.h>
using namespace std;

int main ()
{
	vector<int> ans(1000009, 1);
	for(int i=2; i<= 1000000; i++)
	{
		for(int j=i*2; j<= 1000000; j+= i)
		  ans[j] += i;
	}
	int a,b; cin>>a>>b;
	int dem = 0;
	for(int i=a; i<=b; i++)
	{
		if(ans[i] > i)
		  dem++;
	}
	cout<<dem;
}
