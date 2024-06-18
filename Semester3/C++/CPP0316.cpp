#include<bits/stdc++.h>
using namespace std;
void xuli(string s)
{
    int i,n=s.length(),tong=0;
    for( i=0; i<n; i++)
    {
        tong=tong+s[i]-'0';
    }
    if(tong % 9 ==0 && tong > 0)
      cout<<"1\n";
    else
      cout<<"0\n";
}
void ct()
{
    int t;
    cin>>t;
    string s="";
    while(t--)
    {
        cin>>s;
        xuli(s);
    }
}
int main ()
{
    ct();
}