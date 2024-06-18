#include<bits/stdc++.h>
using namespace std;
int check(int n)
{
	set<int> st;
	int dem = 0;
	while( n != 0)
	{
		int cs = n % 10;
		n = n / 10;
		dem++;
		if(cs > 5)
		  return 0;
		st.insert(cs);
	}
	if(st.size()  == dem)
	  return 1;
	return 0;
}
void ct()
{
	int l,r; cin>>l>>r;
	int dem  = 0;
	for(int i= l; i<=r; i++)
	  dem += check(i);
	cout<<dem<<endl;
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
