#include<bits/stdc++.h>
using namespace std;
void xuli(int n)
{
    int i,a[n+3];
    for(i=0; i<n; i++)
       cin>>a[i];
    sort(a, a+n);
    i=0;
    int vt=0;
    vector<int> ss(n); 
    while(i<n)
    {
        ss[i]=a[vt];
        vt++;
        i=i+2;
    }
    i=1;
    while(i<n)
    {
        ss[i]=a[vt];
        vt++;
        i=i+2;
    }
    for(int x: ss)
      cout<<x<<" ";
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