#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[100][100], n, u, d;
int x[100];
bool chuaxet[100];
void init()
{
    cin>>n>>u;
    for(int i=1; i<=n; i++)
       for(int j=1; j<=n; j++)
          cin>>a[i][j];
    for(int i=1; i<=n; i++)
       chuaxet[i] = true;
}
void hmt(int k)
{
    for(int i=1; i<=n; i++)
    {
        if(a[x[k-1]][i])
        {
            if(k == n+1 && i == u)
            {
                for(int i=1; i<=n; i++)
                   cout<<x[i]<<" ";
                cout<<x[1]<<endl;
                return;
            }
            else if(chuaxet[i])
            {
                x[k] = i;
                chuaxet[i] = false;
                hmt(k+1);
                chuaxet[i] = true;
            }
        }
    }
}
int main ()
{
    init();
    x[1] = u;
    chuaxet[u] = false;
    hmt(2);
}