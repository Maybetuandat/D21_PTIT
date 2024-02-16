#include<bits/stdc++.h>
using namespace std;
int mang[10009]={0};
#define Nmax 10009
void xuli(int n)
{
    
    if(mang[n] == 0)
    {
        cout<<n<<" "<<"1";
    }
    else
    {
        int i=2;
     while( i<= n)
      {
        if( (mang[i] == 0) && (n % i == 0))
        {
            int dem=0;
            while( n % i == 0 )
            {
                dem++;
                n = n / i;
            }
            cout<<i <<" "<<dem<<" ";
            if( mang[n] == 0)
            {
                cout<<n <<" "<<"1";
                break;
            }
        }
        i++;
       }
    }
    cout<<"\n";
}
int main ()
{
    int i,j;
    mang[1]=1;
    for(i=2; i<=sqrt(Nmax); i++)
    {
        for(j=2; j<=Nmax / i; j++)
          mang[i*j]=1;
    }
    int t,n;
    cin >>t;
    
    while( t--)
    {
        cin >>n;
        xuli(n);
    }
}