#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,n,d,i,a[1000];
    cin >>t;
    while(t--)
    {
        cin >>n;
        cin >>d;
        for( i=0; i<n; i++)
        {
            cin >>a[i];
        }
        for(i=d; i<n; i++)
        {
            cout <<a[i] <<" ";
        }
        for(i=0; i<d; i++)
        {
            cout <<a[i] <<" ";
        }
        cout <<endl;
    }
}