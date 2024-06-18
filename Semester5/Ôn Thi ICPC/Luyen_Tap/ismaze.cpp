#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int vs[3005][3005];
int a[3005][3005];
int n;
int x[] = {0, 0, -1, 1};
int y[] = {-1, 1, 0, 0};
void dfs(int i, int j)
{
    vs[i][j] = 1;
    for(int k=0; k<4; k++)
    {
        int i1 = i + x[k];
        int j1 = j + y[k];
        if(i1 >= 0 && i1 < n && j1 >= 0 && j1 < n && !vs[i1][j1])
        {
            dfs(i1, j1);
        }
    }
}
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
     cin>>n;
    int countedge = 0, countvertice = 0;
    for(int i=0; i<n; i++)
      for(int j=0; j<n; j++)
      {
        char ch; cin>>ch;
        a[i][j] = ch - '0';
        vs[i][j] = a[i][j];
        if(a[i][j] == 0)
        {
            countvertice++;
            if(i - 1 >= 0 && a[i-1][j] == 0)
               countedge++;
            if(j - 1 >= 0  && a[i][j-1] == 0)
               countedge++;
        }
        
      }
    int counttplt = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
         if(vs[i][j] == 0)
         {
            dfs(i, j);
            counttplt++;
         }
    }
    // if(counttplt == 1 && countedge + 1 == countvertice)
    //    cout<<"Yes\n";
    // else
    //   cout<<"No\n";
    cout<<countvertice<<endl;
    cout<<countedge<<endl;
    cout<<counttplt<<endl;
    return 0;
}