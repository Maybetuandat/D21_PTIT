#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,i,j;
    int a[10000][10];
    cin >>n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=3;j++)
         cin >>a[i][j];
    }
    int  dem=0;
    for(i=1; i<=n; i++)
    {
        int dem1=0, dem0=0;
        for(j=1; j<=3; j++)
        {
            if( a[i][j] == 0)
              dem0++;
            else
              dem1++;
        }
        if( dem1 > dem0 )
          {
            dem++;
          }
    }
    cout <<dem<<"\n";
}