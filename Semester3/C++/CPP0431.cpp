//https://code.ptit.edu.vn/student/question/CPP0431
//ĐẾM CẶP PHẦN TỬ CÓ HIỆU NHỎ HƠN K

#include<bits/stdc++.h>
using namespace std;
void xuli(int n, int k)
{
    int i,a[n+3];
    for(i=0; i<n; i++)
      cin>>a[i];
    sort(a, a+n);
    long long dd;
    long long ans=0;
    for(i=0; i<n; i++)
    {
        dd=upper_bound(a, a+n, a[i] + k - 1) - (a+i+1);
        ans+= dd;
    }
    cout<<ans<<endl;
}
void ct()
{
    int t; cin>>t;
    while(t--)
    {
        int n,k; cin>>n>>k;
        xuli(n,k);
    }
}
int main ()
{
    ct();
}