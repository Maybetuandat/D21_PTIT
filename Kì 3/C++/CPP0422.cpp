#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,n;
    cin>>t;
    int i,dem;
    long long x;
    while( t--)
    {
        cin>>n;
        dem=0;
        for(i=0; i<n; i++)
        {
            cin>>x;
            if( x == 0)
              dem++;
            else
              cout<<x<<" ";
        }
        for(i=0; i<dem; i++)
          cout<<"0 ";
        cout<<endl;
    }
}