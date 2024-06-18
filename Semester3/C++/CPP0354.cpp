#include<bits/stdc++.h>
using namespace std;
void xuli(string s)
{
    int n=s.length();
    int i=0,j,dem;
    string s1="";
    while( i < n)
    {
        dem=1;
        if( s[i] == s[i+1])
        {
            for(j=i+1; j<n; j++)
            {
                if( s[i] == s[j])
                   dem++;
                else
                  break;
            }
            s1=s1+s[i]+to_string(dem);
            i=j;
        }
        else
        {
            s1=s1+s[i]+to_string(dem);
            i++;
        }
    }
    cout<<s1<<endl;
}
int main ()
{
    int t;
    cin >>t;
    string s;
    while(t--)
    {
        cin >>s;
        xuli(s);
    }
}