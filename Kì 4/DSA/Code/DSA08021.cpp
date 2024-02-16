#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct dl
{
    int hang, cot, dem;
    dl(int hang, int cot, int dem)
    {
        this->cot = cot;
        this->hang = hang;
        this->dem = dem;
    }
};
void ct()
{
    int n,m; cin>>m>>n;
    int a[m+1][n+1];
    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++)
          cin>>a[i][j];
    }
    bool visited[m+1][n+1];
    memset(visited, false, sizeof(visited));
    queue<dl> q;
    q.push(dl(1, 1, 0));
    visited[1][1] = true;
    while(!q.empty())
    {
        dl k = q.front(); q.pop();
        if(k.hang == m && k.cot == n)
        {
            cout<<k.dem<<endl;
            return;
        }
        int i = k.hang; int j = k.cot;
        if(i + a[i][j] <= m  && j <= n && !visited[i+a[i][j]] [j])
        {
            q.push(dl(i+a[i][j], j, k.dem + 1));
            visited[i+a[i][j]] [j] = true;
        }
            
        if(j + a[i][j] <= n && i <= m && !visited[i][j+a[i][j]])
        {
             q.push(dl(i, j+a[i][j], k.dem + 1));
             visited[i]  [j+a[i][j]] = true;
        }
    }
    cout<<"-1"<<endl;

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