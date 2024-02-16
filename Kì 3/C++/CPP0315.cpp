#include<bits/stdc++.h>
using namespace std;
void xuli(string s)
{
    int n=s.length();
    int i=n-2;
    while(s[i] <= s[i+1] && i>=0) i--;
    if(i < 0)
    {
        cout<<"-1"<<endl;
        return;
    }
    int vt=i,vt2;
    // cout<<vt<<endl;
    // cout<<i<<endl;
    char max=' ';
    for(i=vt+1; i<n; i++)
    {
        if(s[i] > max && s[i] < s[vt])
        {
            max=s[i];
            vt2=i;
        }
    }
    swap(s[vt],s[vt2]);
    cout<<s<<endl;
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