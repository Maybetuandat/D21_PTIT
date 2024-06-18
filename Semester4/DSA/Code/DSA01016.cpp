#include<bits/stdc++.h>
using namespace std;
void trial(int lm, int rm, vector<int> a)
{
	if(rm == 0)
	{
		cout<<"(" ;
		for(int i =0; i<a.size() -1; i++ )
		  cout<<a[i]<<" ";
		cout<<a[a.size() - 1] <<") ";
		return;
	}
	for(int i=lm; i>=1; i--)
	{
		if(rm >= i)
		{
			a.push_back(i);
			trial(i, rm - i, a);	
				a.pop_back();
		}
		  
		
	
	}
}
int main  ()
{
	int t; cin>>t;
	while(t--)
	{
		int n;	cin>>n;
		trial(n, n, {});
		cout<<endl;
	}
}
