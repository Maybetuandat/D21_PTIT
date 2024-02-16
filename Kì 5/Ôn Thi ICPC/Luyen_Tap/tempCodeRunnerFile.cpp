#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int vs[3005][3005];
int a[3005][3005];
int n;
void tplt(int i, int j)
{
      if(vs[i][j] == 1)
        return;
     if(i <0 || j < 0 || i == n || j == n)
       return;
    vs[i][j] = 1;
    tplt(i-1, j);
    tplt(i, j - 1);
    tplt(i+1, j);
    tplt(i , j+1);
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
        cin>>a[i][j];
        if(a[i][j] == 0)
        {
            countvertice++;
            if(i - 1 >= 0 && a[i-1][j] == 0)
               countedge++;
            if(j - 1 >= 0  && a[i][j-1] == 0)
               countedge++;
            

        }
        vs[i][j] = a[i][j];
      }
    int counttplt = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
         if(vs[i][j] == 0)
         {
            tplt(i, j);
            counttplt++;
         }
    }
    if(counttplt == 1 && countedge + 1 == countvertice)
       cout<<"Yes\n";
    else
      cout<<"No\n";
    return 0;
}