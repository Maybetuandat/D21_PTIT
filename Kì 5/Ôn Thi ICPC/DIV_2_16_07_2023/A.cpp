#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int hang[] = {-1,  1, 0, 0};
int cot[] = { 0, 0, -1, 1} ;
void ct()
{
    int n,m,k; cin>>n>>m>>k;
    int x,y;  cin>>x>>y;
    int X[k+1], Y[k+1];
    for(int i=1; i<=k; i++)
        cin>>X[i]>>Y[i];
    int a[n+1][m+1];
    for(int i=0; i<=n; i++)
      for(int j=0; j<=m; j++)
         a[i][j] = 0;
    // memset(a, 0, sizeof(a));
    for(int i=1; i<=k; i++)
    {
        
        for(int j=0; j<4; j++)
        {
            int i1 = X[i] + hang[j];
            int j1 = Y[i] + cot[j];
            if(i1 > 0 && i1 <= n && j1 > 0 && j1 <= m )
                a[i1][j1] = 1;
        }
    }
   
   int dcx[]= {-1, -1, 1, 1};
    int dcy[] = {-1, 1, -1, 1};
    for(int i=0; i<4; i++)
    {
        int i1 = x + hang[i];
        int j1 = y + cot[i];
        if(i1 > 0 && i1 <= n && j1 > 0 && j1 <= m && a[i1][j1] == 0)
        {
              for(int t = 0; t < 4; t++ )
            {
                int i2 = i1 + dcx[t];
                int j2 = j1 + dcy[t];
                if(i2 > 0 && i2 <= n && j2 > 0 && j2 <= m && a[i2][j2] == 0)
                {
                    cout<<"YES\n";
                    return;
                }
            }
        }
    }

  cout<<"NO\n";


    
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