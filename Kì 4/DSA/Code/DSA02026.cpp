#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int calculation(int a, int b, char ch)
{
	switch(ch)
	{
	case '+':
		{
			return a + b;
			break;
		}
	case '-':
		{
			return a - b;
			break;
		}
	
	case '*':
		{
			return a * b;
			break;
		}
	}
	return a / b;
}
bool kt(string s)
{
	for(char ch : s)
		if(ch =='?')
			  return false;
	return true;
}
int chuyen(string s)
{
	int ans = 0;
	for(char ch : s)
		ans = ans * 10 + (ch - '0');
	return ans;
}
void Try(string s1, string s2, string s3, string s4, string s5)
{
	cout<<s1<<s2<<s3<<s4<<s5<<endl;
	if( kt(s1) && kt(s2) && kt(s3) && kt(s4) && kt(s5))
	{
		int k1 = chuyen(s1);
		int k2 = chuyen(s3);
		int k3 = chuyen(s5);
		if(calculation(k1, k2, s2[0]) == k3)
		{
			cout<<s1<<" ";
			cout<<s2<<" ";
			cout<<s3<<" ";
			cout<<s4<<" ";
			cout<<s5<<endl;
			return;
		}
	}
	if(s2 == "?")
	{
		Try(s1, "+", s3, s4, s5);
		Try(s1, "-", s3, s4, s5);
		Try(s1, "*", s3, s4, s5);
		Try(s1, "/", s3, s4, s5);
	}
	if(!kt(s1))
	{
		if(s1[0] == '?' && s1[1] == '?')
		{
			for(char ch1 = '1'; ch1 <= '9'; ch1++)
			{
				for(char ch2='0'; ch2 <= '9'; ch2++)
				{
					s1[0] = ch1;
					s1[1] = ch2;
					Try(s1, s2, s3, s4, s5);
				}
			}
		}
		else
		{
			if(s1[0] == '?')
			{
				for(char ch ='1'; ch <= '9'; ch++)
				{
					s1[0] = ch;
					Try(s1, s2,s3,s4,s5);
				}
			}
			else
			{
				for(char ch ='0'; ch <= '9'; ch++)
				{
					s1[1] = ch;
					Try(s1, s2,s3,s4,s5);
				}
			}
		}
	}
	
	if(!kt(s3))
	{
		if(s3[0] == '?' && s3[1] == '?')
		{
			for(char ch1 = '1'; ch1 <= '9'; ch1++)
			{
				for(char ch2='0'; ch2 <= '9'; ch2++)
				{
					s3[0] = ch1;
					s3[1] = ch2;
					Try(s1, s2, s3, s4, s5);
				}
			}
		}
		else
		{
			if(s3[0] == '?')
			{
				for(char ch ='1'; ch <= '9'; ch++)
				{
					s3[0] = ch;
					Try(s1, s2,s3,s4,s5);
				}
			}
			else
			{
				for(char ch ='0'; ch <= '9'; ch++)
				{
					s3[1] = ch;
					Try(s1, s2,s3,s4,s5);
				}
			}
		}
	}
	if(!kt(s4))
	{
		if(s4[0] == '?' && s4[1] == '?')
		{
			for(char ch1 = '1'; ch1 <= '9'; ch1++)
			{
				for(char ch2='0'; ch2 <= '9'; ch2++)
				{
					s4[0] = ch1;
					s4[1] = ch2;
					Try(s1, s2, s3, s4, s5);
				}
			}
		}
		else
		{
			if(s4[0] == '?')
			{
				for(char ch ='1'; ch <= '9'; ch++)
				{
					s4[0] = ch;
					Try(s1, s2,s3,s4,s5);
				}
			}
			else
			{
				for(char ch ='0'; ch <= '9'; ch++)
				{
					s4[1] = ch;
					Try(s1, s2,s3,s4,s5);
				}
			}
		}
	}
	


}
void ct()
{
	string s;
	getline(cin, s);
	stringstream ss(s);
	string cmp;
	vector<string> ans;
	while(ss >> cmp)
		ans.push_back(cmp);
	for(string x : ans)
		  cout<<x<<endl;
	//Try(ans[0], ans[1], ans[2], ans[3], ans[4]);
}
int main ()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	int t; cin>>t;
	cin.ignore();
	while(t--)
	{
		ct();
	}
	return 0;
}