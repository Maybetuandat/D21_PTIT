#include<bits/stdc++.h>
using namespace std;
void xuli( string s)
{
    int i,n=s.length(),tong=0;
    for(i=0; i<n; i++)
    {
        if( i % 2 == 0)
        {
            tong=tong + s[i]-'0';
        }
        else
        {
            tong=tong-(s[i] - '0');
        }
    }
    if( tong % 11 == 0)
        cout<<"1\n";
    else
        cout<<"0\n";
}
int main ()
{
    int t;
    cin >>t;
    string s;
    while( t--)
    {
        cin >>s;
        xuli(s);
    }
}