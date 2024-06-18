#include<bits/stdc++.h>
using namespace std;
bool kt(int n)
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
    int a,b;
    cin >>a >>b;
    int dau=( (a+b)- abs(a-b) ) / 2;
    int cuoi =( (a+b)+abs(a-b) ) / 2;
    for(int i=dau; i<=cuoi; i++)
    {
        if( kt(i))
          cout<<i<<" ";
    }
}