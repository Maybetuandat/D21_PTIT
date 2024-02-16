#include<bits/stdc++.h>
using namespace std;
#define  Nmax 100000
int mang[100000]={0};
void xuli( int n)
{
    for( int i=2; i<=sqrt(n); i++)
    {
        if( mang[i] == 0 && i * i <= n)
        {
            cout <<i*i<<" ";
        }
    }
    cout <<"\n";
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