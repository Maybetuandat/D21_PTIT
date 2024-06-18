#include<bits/stdc++.h>
using namespace std;
long long tinh(long long n, long long k)
{
    long long  tong=0;
    for(long long  i=1; i<=n; i++)
    {
        tong =tong + i % k;
    }
    return tong;
}
int main ()
{
    int t;
    cin >>t;
    long long n,k;
    while (t--)
    {
        cin >>n >>k;
        if( tinh(n,k) == k)
        {
            cout <<"1\n";
        }
        else
        {
            cout <<"0\n";
        }
    }
}