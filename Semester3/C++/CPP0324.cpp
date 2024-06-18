#include<bits/stdc++.h>
using namespace std;
void xuli(string a, long long b, long long m)
{
    int i,n=a.length();
    long long ans=0;
    for(i=0; i<n; i++)
    {
        int k = a[i] -'0';
        ans= (ans*10 +k) % m;
    }
    long long res=1;
    while(b != 0)
    {
        if( b % 2 == 1)
            res=(res*(ans % m ) ) % m;
        
        b=b/2;
        ans=(ans*(ans % m ) ) % m;
    }
    cout<<res<<endl;
}
void ct()
{
    int t; cin>>t;
    string a;
    long long m,b;
    while(t--)
    {
        cin>>a>>b>>m;
        xuli(a,b,m);
    }
}
int main ()
{
    ct();
}