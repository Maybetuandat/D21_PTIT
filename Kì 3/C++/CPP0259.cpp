#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int m,n,p;
    cin >>n >>m >>p;
    int a[100][100],b[100][100],mang[100][100]={0};
    int i,j,k,l;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
          cin >>a[i][j];
    }
    for(i=1; i<=m; i++)
    {
        for(j=1; j<=p; j++)
          cin >>b[i][j];
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=p; j++)
        {
            for(k=1; k<=m; k++)
              mang[i][j]=mang[i][j]+a[i][k]*b[k][j];
        }
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=p; j++)
        {
            cout<<mang[i][j]<<" ";
        }
        cout <<"\n";
    }
}