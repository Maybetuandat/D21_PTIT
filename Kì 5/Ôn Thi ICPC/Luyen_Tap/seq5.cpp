#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void ct()
{
    
}
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n,k; cin>>n>>k;
    int a[n+1];
    for(int i=1; i<=n; i++)
       cin>>a[i];
    int maxL[n+1];
    maxL[1] = a[1];
    int maxR[n+1];
    maxR[n] = a[n];
    for(int i=2; i<=n; i++)
        maxL[i] = max(maxL[i-1], a[i-1]);
    for(int i=n-1; i>=1; i--)
        maxR[i] = max(maxR[i+1], a[i+1]);
    // for(int i=1; i<=n; i++)
    //     cout<<maxL[i]<<" "<<maxR[i]<<endl;
    int maxx = 0;
    for(int i=2; i<=n-1; i++)
       maxx = max(maxx, maxL[i] - a[i] + maxR[i]);
    cout<<maxx<<endl;
    
    
}