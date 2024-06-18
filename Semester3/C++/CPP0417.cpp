#include<bits/stdc++.h>
using namespace std;
void xuli(int n)
{
    int i,a[n+5],b[n+5];
    for(i=0; i<n; i++)
    {
       cin>>a[i];
       b[i]=a[i];
    }
    sort(a,a+n);
    int l=1,r=n;
    for(i=0; i<n; i++)
    {
        if(a[i] != b[i])
        {
            l=i+1;
            break;
        }
    }
    for(i=n-1; i>=0; i--)
    {
        if(a[i] != b[i])
        {
            r=i+1;
            break;
        }
    }
    cout<<l<<" "<<r<<endl;
}
void ct()
{
    int t,n;   cin>>t;
    while(t--)
    {
        cin>>n;
        xuli(n);
    }
}
int main ()
{
    ct();
}