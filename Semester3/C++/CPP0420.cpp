#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b)
{
       if(a.second > b.second)   return false;
       if(a.second == b.second)
       {
          if(a.first > b.first)
            return false;
         else
            return   true;
       }
       return true;
}
void xuli(int n, int x)
{
    int i,a[n+3];
    vector< pair<int, int> > ans(n);
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        ans[i].first=i;
        ans[i].second=abs(a[i] - x);
    }
    sort(ans.begin(), ans.end(), cmp);
    for(pair<int, int> x : ans)
    {
        cout<<a[x.first]<<" ";
    }
    cout<<endl;
}
void ct()
{
    int t,x,n ; cin >>t;
    while(t--)
    {
        cin>>n >>x;
        xuli(n,x);
    }
}
int main ()
{
    ct();
}