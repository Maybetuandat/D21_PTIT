#include<bits/stdc++.h>
using namespace std;
#define Nmax 10000
int mang[10009]={0};
void xuli(int n)
{
    for(int i=2; i<=n; i++)
    {
        if( mang[i] == 0)
          cout <<i <<" ";
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
    // for(int i=1; i<=1000; i++)
    // {
    //     if( mang[i] == 0)
    //       cout<<i <<endl;
    // }
    int t,n;
    cin >>t;
    while( t--)
    {
        cin >>n;
        xuli(n);
    }
}