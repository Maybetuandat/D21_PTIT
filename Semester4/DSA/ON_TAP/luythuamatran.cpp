#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[15][15], kq[15][15];
int n,k;
int Nmax = 1e9 + 7;
void nhan(ll a[15][15], ll b[15][15])
{
    ll tmp[15][15];
    for(int i=0; i<15; i++)
      for(int j=0; j<15; j++)
        tmp[i][j] = 0;
    for(int i=0; i<n; i++)
      for(int j=0; j<n; j++)
        for(int k=0; k<n; k++)
      {
        tmp[i][j] += (a[i][k] * b[k][j]) % Nmax;
        tmp[i][j] %= Nmax;
      }
      for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
          kq[i][j] = tmp[i][j];
}
void mu(ll f [15][15], int k)
{

    if(k <= 1)
      return;
    mu(f, k / 2);
    nhan(f, f);
    if(k % 2 == 1)
       nhan(f, a);
    
}
void ct()
{
    cin>>n>>k;
    for(int i=0; i<n; i++)
      for(int j=0; j<n; j++)
      {
        cin>>a[i][j];
        kq[i][j] = a[i][j];
      }    
    mu(kq, k);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
         cout<<kq[i][j]<<" ";
         cout<<endl;
    }
      
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