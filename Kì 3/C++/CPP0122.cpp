#include<bits/stdc++.h>
using namespace std;
long long  UCLN(long long a, long long b)
{
    long long  du=0;
    while( b != 0)
    {
        du= a % b;
        a=b;
        b=du;
    }
    return a;
}
void xuli(long long  n)
{
    long long  kq=1;
    for(long long  i=1; i<=n; i++)
    {
        kq= i*kq / UCLN(i,kq);
    }
    cout <<kq <<endl;
}
int main ()
{
    long long  t,n;
    cin >>t;
    while(t--)
    {
        cin >>n;
        xuli(n);
    }
}