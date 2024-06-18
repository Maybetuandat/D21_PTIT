#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    long long n,x,i,y;
    int a[100000];
    while( t--)
    {
        cin >>n >>x;
        int kt=0;
        
        for(i=1; i<=n; i++)
        {
            cin >>a[i];
        }
        for(i=1; i<=n; i++)
        {
            if( a[i] == x)
            {
                cout<<i<<endl;
                kt=1;
                break;
            }
        }
        if( kt == 0)
          cout<<"-1\n";
    }
}