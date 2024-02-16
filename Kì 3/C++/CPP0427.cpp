#include<bits/stdc++.h>
using namespace std;
void xuli(int n)
{
    int a[n+3],i,dem0=0;
    for(i=0; i<n; i++)
    {
       cin>>a[i];
       if(a[i] == 0)
         dem0++;
    }
    i=0;
    while(i<n-1)
    {
        if(a[i] == a[i+1] && a[i] != 0)
        {
            a[i]*=2;
            a[i+1]=0;
            dem0++;
            i=i+2;
        }
        else
          i++;
    }
    for(i=0; i<n; i++)
      if(a[i] != 0)
        cout<<a[i]<<" ";
    for(i=0;i<dem0; i++)
      cout<<"0"<<" ";
    cout<<endl;
}
void ct()
{
    int n,t; cin>>t;
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