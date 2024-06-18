#include<bits/stdc++.h>
using namespace std;
void ct()
{
	int n1, n2, n3;cin>>n1>>n2>>n3;
	vector<int> a1(n1), a2(n2), a3(n3);
	for(int i=0; i<n1; i++)
	   cin>>a1[i];
	for(int i=0; i<n2; i++)
	   cin>>a2[i];
	for(int i=0; i<n3; i++)
	   cin>>a3[i];
	int i=0, j=0, k=0;
	bool ok =false;
	while(i < n1 && j <n2 && k <n3)
	{
		if( a1[i] == a2[j] && a1[i] == a3[k])
		{
			ok =true;
			cout<<a1[i]<<" ";
			i++;
			j++;
			k++;
		}
		else if(a1[i] < a2[j])
		       i++;
		     else if(a2[j] < a3[k])
		         j++;
		    	else 
		    	   if(a3[k] < a1[i])
		    	      k++;
	}
	if(ok)	cout<<endl;
	else
	  cout<<"NO\n";
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
