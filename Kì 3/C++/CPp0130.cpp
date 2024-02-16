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
    if( kt(n))
    {
        cout <<n <<endl;
    }
    else
    {
        long long i=2;
        while( i<=n)
        {
            if( ( n % i == 0) && ( kt(i) ) )
            {
                while( n % i == 0)
                {
                    n = n / i;
                    cout <<i<<" ";
                }
                if(kt(n))
                {
                    cout << n;
                    break;
                }
            }
            i++;
        }
        cout<<"\n";
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