#include<bits/stdc++.h>
using namespace std;
void xuli(string a, string b)
{
    while(a.length() > b.length())
           b='0'+b;
    string max1=max(a,b);
    string min1=min(a,b);
    string kq="";
    int nho=0,n=a.length(),i,cs1,cs2,ans;
    for( i=n-1; i>=0; i--)
    {
        cs1=max1[i]-'0';
        cs2=min1[i]-'0';
        ans=cs1-cs2-nho;
        nho=0;
        if(ans<0)
        {
            ans=ans+10;
            nho=1;
        }
        char ch= ans+'0';
        kq=ch+kq;
    }
    cout<<kq<<endl;
}
void ct()
{
    int t;
    cin>>t;
    string s1,s2,tg="";
    while(t--)
    {
        cin>>s1;
        cin>>s2;
        if(s1.length() < s2.length())
        {
            tg=s1; s1=s2; s2=tg;
        }
        xuli(s1,s2);
    }
}
int main ()
{
    ct();
}