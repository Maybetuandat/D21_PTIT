#include<bits/stdc++.h>
using namespace std;
void xuli(string s, long long a)
{
    long long  ans=0;
    int n=s.length();
    for(int  i=0; i<n; i++)
    {
        int  k = s[i] - '0';
        ans= ( ans*10 + k ) % a;
    }
    cout<<ans<<endl;
}
void ct()
{
    int t; cin>>t;
    string s;
    long long a;
    while(t--)
    {
        cin>>s;
        cin>>a;
        xuli(s,a);
    }
}
int main ()
{
    ct();
}