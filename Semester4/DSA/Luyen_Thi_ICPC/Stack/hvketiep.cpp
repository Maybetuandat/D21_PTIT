#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void ct()
{
    int n; cin>>n;
    int a[n+1];
    for(int i=1; i<=n; i++)
       cin>>a[i];
        int i = n-1;
        while(a[i] > a[i+1] && i > 0)
          i--;
        int k = n;
        while(a[k] < a[i])
          k--;
        swap(a[i], a[k]);
        int l = i+1;
        int r = n;
        while(l < r)
        {
            swap(a[l], a[r]);
            l++;
            r--;
        }
    for(int i=1; i<=n; i++)
      cout<<a[i];
    cout<<endl;
}
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        ct();
    }
    return 0;
}