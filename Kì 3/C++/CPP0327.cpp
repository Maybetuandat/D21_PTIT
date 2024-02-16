#include<bits/stdc++.h>
using namespace std;
void xuli(string s)
{
    long long tg=1,sum =0;
    int i,n=s.length();
    for(i=n-1; i>=0; i--)
    {
        sum=sum+ (s[i] - '0') *tg;
        sum=sum % 10;
        tg=tg*2;
        tg=tg % 10;
    }
    if( sum % 5 == 0)
      cout<<"Yes\n";
    else
      cout<<"No\n";
}
int main ()
{
    string s;
    int t;
    cin >>t;
    while(  t--)
    {
        cin >>s;
        xuli(s);
    }
}