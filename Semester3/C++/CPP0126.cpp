#include<bits/stdc++.h>
using namespace std;
bool kt(long long  n)
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
int main ()
{
    int t;
    cin >>t;
    while(t--)
    {
        long long a,b;
        cin >>a >>b;
        long long dau=( (a+b)- abs(a-b) ) / 2;
        long long cuoi =( (a+b)+abs(a-b) ) / 2;
        for(long long i=dau; i<=cuoi; i++)
        {
           if( kt(i))
             cout<<i<<" ";
        }
        cout <<"\n";
    }
}