#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    long long n,m,i,x;
    cin>>t;
    while( t--)
    {
        cin>>n >>m;
        long long min=INT_MAX, max=INT_MIN;
        for(i=0; i<n; i++)
        {
            cin>>x;
            if( x > max)
              max=x;
        }
        for(i=0; i<m; i++)
        {
            cin>>x;
            if( x < min)
              min=x;
        }
        cout<< max*min<<endl;
    }
}