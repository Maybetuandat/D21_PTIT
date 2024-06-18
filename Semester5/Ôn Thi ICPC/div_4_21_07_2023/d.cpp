#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void ct()
{
    int n,k; cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++)
       cin>>a[i];
    sort(a, a + n);
    vector<int> ans;
    for(int i=0;i < n-1; i++)
       ans.push_back(abs(a[i] - a[i+1]));
    int dem[n] = {0};
    int maxx = 0;
    for(int i=1; i<n; i++)
    {
        if(ans[i-1] <= k)
          dem[i] = dem[i-1] + 1;
        else
           continue;
        if(dem[i] > maxx)
          maxx = dem[i];
    }
    cout<< n - (maxx + 1)<<endl;
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