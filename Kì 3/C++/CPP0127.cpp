#include<bits/stdc++.h>
using namespace std;
bool kt(int  n)
{
    if( n < 2)
      return false;
    bool kt=true;
    for(int i=2; i<=sqrt(n); i++)
    {
        if( n % i == 0)
        {
            kt=false;
            break;
        }
    }
    return kt;
}
void xuli(int n)
{
    int kiemtra =-1,a;
    for(int i=2; i<=n/2; i++)
    {
        if( kt(i))
        {
            a= n-i;
            if( kt(a))
            {w
                kiemtra=i;
                break;
            }
        }
    }
    if( kiemtra==-1)
    {
        cout <<kiemtra<<endl;
    }
    else
    {
        cout <<kiemtra <<" " << n-kiemtra <<endl;
    }
}
int main ()
{

    int t;
    int n;
    cin >>t;
    while(t--)
    {
        cin >>n;
        xuli(n);
    }
}