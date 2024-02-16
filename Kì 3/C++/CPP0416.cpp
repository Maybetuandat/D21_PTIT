#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,n,k,i,j;
    cin>>t;
    while( t--)
    {
        cin>>n>>k;
        int a[n]={0};
        for(i=0; i<n; i++)
          cin>>a[i];
        long long dem=0;
        for(i=0; i<n-1; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if( a[i] + a[j] == k)
                  dem ++;
            }
        }
        cout<<dem<<endl;
    }
}