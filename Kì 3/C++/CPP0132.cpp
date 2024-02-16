#include<bits/stdc++.h>
using namespace std;
bool kt(long long n)
{
    if( n< 2)
      return false;
    for(int i=2; i<=sqrt(n); i++)
    {
        if( n % i == 0)
        {
            return false;
            break;
        }
    }
    return true;
}
void xuli(long long n)
{
    if( kt(n) == true)
    {
        cout <<n <<endl;
    }
    else
    {
        long long max=0;
        for(long long  i=sqrt(n); i>=2; i--)
        {
            if( n % i ==0)
            {
                long long k = n / i;
                if (( i > max) && (kt(i)))
                    max=i;
                if((k>max ) && ( kt(k)))
                {
                    max=k;
                }
                
            }
        }
        cout <<max <<endl;
    }
}
int main ()
{
    int t;
    cin >>t;
    long long n;
    while( t--)
    {
        cin >>n;
        xuli(n);
    }
}