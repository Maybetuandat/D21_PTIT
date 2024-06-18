#include<bits/stdc++.h>
using namespace std;
int n, a[35], s, kq;
void quaylui(int i, int sum, int x)
{
	if(sum > s || x > kq)
	  return ;
	if(i == n)
	{
		if(sum ==  s)
		  kq = min(kq,x);
		return;
	}
	quaylui(i + 1, sum, x);
	quaylui(i + 1, sum + a[i], x + 1);a
}
bool cmp(int a, int b)
{
	return a > b;
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	 cin>>n>>s;
	kq = 1000;
	for(int i=0; i<n; i++)
	   cin>>a[i];
	quaylui(0 , 0 , 0);
	if(kq != 1000)
	cout<<kq<<endl;
	else
	  cout<<"-1\n";
	
}doi