#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,n,i,x;
    cin >>t;
    while (t--)
    {
        cin >>n;
        int max=INT_MIN,a[1000009]={0};
        for(i=0; i<n; i++)
        {
          cin >>x;
          if( x > max)
            max=x;
          if( x > 0)
             a[x]++;
        }
        bool kt=false;
        for(i=1; i<max; i++)
        {
            if( a[i] == 0)
            {
             cout <<i<<endl;
             kt=true;
             break;
            }
        }
        if( kt==false)
        {
            cout <<max+1 <<endl;
        }

    }
}