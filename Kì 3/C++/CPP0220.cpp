#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,n,i,j;
    int a[103][103];
    cin >>t;
    while( t--)
    {
        cin >>n;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
              cin >>a[i] [j];
            }
        }
        for(i=2; i<n; i++)
        {
            for(j=2; j<n; j++)
              a[i] [j]=-1;
        }
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                if( a[i] [j] >=0)
                  cout <<a[i] [j] <<" ";
                else
                   cout <<"  ";
            }
            cout <<"\n";
        }
    }
}