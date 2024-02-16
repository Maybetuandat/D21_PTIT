#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void ct()
{
        string s1,s2; cin>>s1>>s2;
        int n = s1.length();
        int m = s2.length();
        int f[n+1][m+1];

        for(int i=0; i <= n; i++)
            f[i][0] = 0;
        
        for(int i=0; i<=m; i++)
           f[0][i] =  0;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
              if(s1[i-1] == s2[j-1])
                f[i][j] = f[i-1][j-1] + 1;
            else
              f[i][j] = max(f[i-1][j], f[i][j-1]);
        }
        cout<<f[n][m]<<endl;
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