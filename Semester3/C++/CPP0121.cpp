#include<bits/stdc++.h>
using namespace std;
long long UCLN(long long a, long long b)
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
void xuli(long long a, long long b)
{
    long long x=UCLN(a,b);
    cout<<a*b/x <<" "<<x <<endl;
}
int main ()
{
    long long  t,a,b;
    cin >>t;
    while( t--)
    {
        cin >>a >>b;
        xuli(a,b);
    }
}