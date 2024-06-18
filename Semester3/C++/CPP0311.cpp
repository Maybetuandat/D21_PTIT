#include<bits/stdc++.h>
using namespace std;
void xuli(string s)
{
        int n=s.length();
        int dem[26]={0};
        for(int i=0; i<n; i++)
        {
            dem[s[i] -'a']++;
        }
        int d=0;
        for(int i=0; i<=26; i++)
        {
            if(dem[i] > d)
               d=dem[i];
        }
        if( d <= (n+1) / 2)
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