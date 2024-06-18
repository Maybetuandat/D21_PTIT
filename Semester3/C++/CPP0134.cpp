#include<bits/stdc++.h>
using namespace std;
#define Nmax 100000
int mang[100000]={0};
long long  xuli(long long  n, long long  k)
{
      long long  i=2,dem=0;
      while(i <= n)
      {
        if( (mang[i] == 0) && ( n % i == 0 ) ) 
          {
             while( n % i == 0)
             {
                dem++;
                n = n / i;
                if( dem == k)
                {
                    return i;
                }
             }
             if( mang[n] == 0)
              {
               dem++;
               if( dem == k )
                {
                   return n;
                } 
                break;
               }
          }
          i++;
      }
    return -1;
    
}
int main ()
{
  int t,n,k;
  cin >>t;
  mang[1]=1;
    for(int i=2; i<=sqrt(Nmax); i++)
    {
        if(mang[i] == 0)
        {
            for(int j=2; j<=Nmax / i; j++)
              mang[i*j]=1;
        }
    }
  while( t--)
  {
    cin >>n >>k;
    cout <<xuli(n,k) <<endl;
  }  
}