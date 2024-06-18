#include<bits/stdc++.h>
using namespace std;
void casetest()
{
	int n; cin>>n;
	multiset<long long > st;
	for(int i=0; i<n; i++)
	{
		int x; cin>>x;
		st.insert(x);
	}
	long long tong =0;
	while(st.size() != 1)
	{
		long long  i = *st.begin();
		st.erase(st.begin());
		long long  j = *st.begin();
		st.erase(st.begin());
		tong = tong +i + j;
		st.insert(i + j);
	}
	cout<<tong<<endl;
}
int main ()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin>>t;
    while(t--)
    {
    	casetest();
	}
}
