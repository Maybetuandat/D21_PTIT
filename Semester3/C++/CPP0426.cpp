#include<bits/stdc++.h>
using namespace std;
void xuli(int n)
{
    int a[n+3],i;
    for(i=0; i<n; i++)
       cin>>a[i];
    sort(a, a+n);
    for(i=n-1; i>= n / 2; i--)
    {
        if(i != n-i-1)
           cout<<a[i] <<" "<<a[n-i-1] <<" ";
        else
           cout<<a[i]<<" ";
    }
    cout<<endl;
}
void ct()
{
    int t,n; cin>>t;
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