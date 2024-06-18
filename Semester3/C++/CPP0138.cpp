#include<bits/stdc++.h>
using namespace std;
#define Nmax 1000000
int mang[1000000]={0};
void xuli(int n)
{
    for(int i=2; i<= n / 2; i++)
    {
        if ( mang[i] == 0 && mang[ n - i] == 0 )
        {
            cout <<i <<" "<< n-i <<endl;
            break;
        }
    }
}
int main ()
{
    mang[1]=1;
    for(int i=2; i<=sqrt(Nmax); i++)
    {
        if(mang[i] == 0)
        {
            for(int j=2; j<=Nmax / i; j++)
              mang[i*j]=1;
        }
    }
    int t,n;
    cin >>t;
    while( t--)
    {
        cin >>n;
        xuli(n);
    }
}