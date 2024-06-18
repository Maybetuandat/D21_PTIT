#include<bits/stdc++.h>
using namespace std;
int  main ()
{
    long long  t,n,i,x;
    cin >>t;
    while(t--)
    {
        cin >>n;
        long long dem=0;
        long long  min=INT_MAX,max=INT_MIN;
        int a[1000009]={0};
        for(i=0; i<n; i++)
        {
            cin >>x;
            a[x]++;
            if( x > max)
              max=x;
            if( x < min)
               min=x;
        }
        for(i=min; i<=max; i++)
        {
            if(a[i] > 1)
               dem+=a[i];
        }
        cout <<dem<<endl;
    }
}