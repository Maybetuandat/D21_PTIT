#include<bits/stdc++.h>
using namespace std;
void xuli(int n, int k)
{
    int i, a[n+3];
    int count=0;
    for(i=0; i<n; i++)
    {
        cin >>a[i];
        if(a[i] <= k)
          count++;
    }
    int dem=0;
    for(i=0; i<count ; i++)
    {   
        if(a[i] <=k)
           dem++;
    }
    int ans=dem;
    for(i=1; i < n-count+1; i++)
    {
        if(a[i-1] <=k )   dem--;
        if(a[i+count-1] <= k)    dem++;
        ans=max(ans,dem);
    }
    cout <<count-ans <<endl;
}
void ct()
{
    int t; cin>>t;
    int n,k;
    while(t--)
    {
        cin>>n>>k;
        xuli(n,k);
    }
}
int main ()
{
    ct();
}