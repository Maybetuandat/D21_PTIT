#include<bits/stdc++.h>
using namespace std;
string s;
bool check(int i)
{
	if(s[i-1] == '1' || s[i-1] == '2' && s[i] <= '6')
	  return true;
	return false;
}
void ct()
{
	cin>>s;
	int n = s.length();
	s = '#' + s;
	int f[n+1] ={0};
	f[0] = 1; // mac dinh la co 1 cach tach khi tach cac chu so thanh so co 1 chu so
	for(int i=1; i<=n; i++)
	{
		if(s[i] == '0')
		{
			if(i == 1 || s[i-1] != '2' && s[i-1] != '1')
			{
				cout<<"0\n";
				return;
			}
		f[i] = f[i-2];
		}
		else
		{
			// neu nhu khong chon gia tri tai i
			f[i] = f[i-1];
			if(i >= 2 && check(i))
			{
			// tinh so cach nhay hai chu so
			f[i] += f[i-2];
		    }
		}
	}
	cout<<f[n]<<endl;
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
