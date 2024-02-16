#include<bits/stdc++.h>
using namespace std;
void xuli(string s)
{
    int i,n=s.length();
    bool kt=true;
    for(i=0; i<n; i++)
    {
        if( s[i] != s[n-i-1])
        {
            kt=false;
            break;
        }
    }
    if( kt)
    {
        cout<<"YES\n";
    }
    else
    cout<<"NO\n";
}
int main ()
{
    int t;
    string s;
    cin >>t;
    while( t--)
    {
        cin>>s;
        xuli(s);
    }
}