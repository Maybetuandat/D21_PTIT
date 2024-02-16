#include<bits/stdc++.h>
using namespace std;
int tinhtong(long long n)
{
    int tong=0;
    while( n != 0)
    {
        tong+=n%10;
        n=n / 10;
    }
    return tong;
}
void xuli(long long n)
{
    while( n>=10)
    {
        n=tinhtong(n);
    }
    cout<<n <<endl;
}
int main ()
{
    int t;
    long long n;
    cin >>t;
    while(t--)
    {
        cin>>n;
        xuli(n);
    }
}