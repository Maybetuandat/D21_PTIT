#include<bits/stdc++.h>
using namespace std;
bool kt(long long n)
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
void xuli(long long  n)
{
    
    if(kt(n))
    {
        cout<<n<<" "<<"1";
    }
    else
    {
        long long  i=2;
     while( i<= n)
      {
        if( (kt(i) ==true ) && (n % i == 0))
        {
            long long  dem=0;
            while( n % i == 0 )
            {
                dem++;
                n = n / i;
            }
            cout<<i <<" "<<dem<<"\n";
            if( kt(n) )
            {
                cout<<n <<" "<<"1\n";
                break;
            }
        }
        i++;
       }
    }
}
int main ()
{
    long long n;
    cin >>n;
    xuli(n);
}