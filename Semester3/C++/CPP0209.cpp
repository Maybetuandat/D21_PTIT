#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,n,k,i,a[10009],l,r;
    cin >>t;
    while(t--)
    {
        cin >>n >>k;
        for(i=1; i<=n; i++)
          cin >>a[i];
        for(i=1; i<=k; i++)
        {
            cin >>l >>r;
            long long tong=0;
            for(int j=l; j<=r; j++)
            {
                tong+=a[j];
            }
            cout <<tong<<endl;
        }
    }
}