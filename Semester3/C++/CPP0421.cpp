#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,n,i;
    long long x;
    cin>>t;
    while( t--)
    {
        cin>>n;
        set<long long> ss;
        for( i=0; i<n; i++)
        {
            cin>>x;
            ss.insert(x);
        }
        for(i=0; i<n; i++)
        {
            if( ss.count(i) != 0)
            {
                cout<<i<<" ";
            }
            else
            {
                cout<<"-1 ";
            }
        }
        cout<<endl;
    }
}