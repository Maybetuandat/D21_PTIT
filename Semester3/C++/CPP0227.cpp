#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,n,i,j;
    cin >>t;
    int a[103][103];
    while(t--)
    {
        cin >>n;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
              cin >>a[i] [j];
        }
        int hang=1,vt=1;
        while( hang <=n)
        {
            if( vt == n)
            {
                for(i=n; i>=1; i--)
                {
                    cout <<a[hang][i]<<" ";
                }
                vt=1;
            }
            else
            {
                for(i=1; i<=n; i++)
                {
                    cout <<a[hang][i] <<" ";
                }
                vt=n;
            }
            hang++;
        }
        cout <<"\n";
    }
}