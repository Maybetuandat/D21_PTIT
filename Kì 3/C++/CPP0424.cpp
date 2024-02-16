#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    int n,k,i,j;
    while( t--)
    {
        long long dem=0;
        int a[1000000];
        cin>>n>>k;
        for(i=0; i<n; i++)
        {
            for(j=0; j<k; j++)
            {
                cin>>a[dem];
                dem++;
            }
        }
        sort(a, a+dem);
        for(i=0; i<dem; i++)
          cout<<a[i]<<" ";
          cout<<"\n";
    }
}