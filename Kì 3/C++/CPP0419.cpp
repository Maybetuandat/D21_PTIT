#include<bits/stdc++.h>
using namespace std;
void xuli(int n, int m)
{
    vector<int>::iterator it;
    int i, a[n+3], b[m+3];
    vector<int> v(n+m);
    for(i=0; i<n; i++)
      cin>>a[i];
    for(i=0; i<m; i++)
      cin>>b[i];
    sort(a, a+n);
    sort(b, b+m);
      //in ra hop cua hai mang
    vector<int> vv(n+m);
    it=set_union(a, a+n, b, b+m, vv.begin());

     vv.resize(it - vv.begin());
    for(int x : vv)
      cout<<x<<" ";
    cout<<endl;
    //in ra giao cua hai mang
    it=set_intersection(a, a+n, b, b+m, v.begin());
    v.resize(it-v.begin());
    for(int x: v)
       cout<<x<<" ";
    cout<<endl;
}
void ct()
{
    int t,n,m; cin>>t;
    while(t--)
    {
        cin>>n>>m;
        xuli(n,m);
    }

}
int main ()
{
    ct();
}