#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(string s)
{
	int n=s.length();
	if(s[0] == '-')
	   s.erase(0,1);
	for(int i=0; i<n; i++)
	{
		if( !isdigit(s[i]))
		  return false;
	}
	return true;
}
ll chuyendoi(string s)
{
	ll ans=0;
	bool kt=false;
	if(s[0]=='-')
	{
		s.erase(0,1);
		kt=true;
	}
	int i,n=s.length();
	for( i=0; i<n; i++)
	{
		ans=ans*10 + s[i] -'0';
	}
	if(kt == true)
	   ans*=-1;
	return ans;
}
void ct()
{
	ifstream f;
	f.open("DATA.in", ios::in);
	string s;
	ll sum=0;
	while(f >> s)
	{
		if(s.length() <= 11 && check(s))
		{
			ll n=chuyendoi(s);
			if(n >= INT_MIN && n <=INT_MAX)
		      	sum+=n;		
		}
	}
	cout<<sum<<endl;
	f.close();
}
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ct();
	return 0;
}
