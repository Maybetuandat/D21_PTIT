#include<bits/stdc++.h>
using namespace std;
void xuli(long long n)
{
    int dem=0,a[100];
    while(dem <=2 )
    {
        dem++;
        a[dem]=n%10;
        n=n/10;
    }
    if( (a[1] == 6) &&(a[2] == 8))
       cout<<"1\n";
    else
       cout<<"0\n";
}
int main ()
{
    int t;
    long long n;
    cin >>t;
    while( t--)
    {
        cin >>n;
        xuli(n);
    }
}