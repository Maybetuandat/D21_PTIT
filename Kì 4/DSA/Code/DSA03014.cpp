#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(string s1, string s2)// ham co tac dung la kiem tra xem xau s2 co ton tai trong xau s1 hay khong 
{
	int i=0, j = 0;
	while(i < s1.length() && j < s2.length())
	{
		if(s1[i] == s2[j])
		{
			i++;
			j++;
		}
		else
		  i++;
	}
	return j == s2.length();
}
void ct()
{
	string s; cin>>s;
	long long res = -1;
	for(int i=1; i<=1000000;i++ )
	{
		long long tmp = i * i * i;
		string cmp = to_string(tmp);
		if(cmp.length() >s.length())
		  break;
		if(check(s, cmp))
		{
			res = tmp;
			
		}
		
	}
	cout<<res<<endl;
}
int main ()
{
	
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
