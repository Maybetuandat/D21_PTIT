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
int main ()
{
    long long n;
    cin >>n;
    
    if(kt(n))
     cout<<"YES"<<endl;
    else
      cout<<"NO\n";
}