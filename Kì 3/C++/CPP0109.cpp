#include<bits/stdc++.h>
using namespace std;
int kt(int n)
{
    int demle=0,demchan=0,cs;
    while( n!=0)
    {
        cs=n % 10;
        n=n/10;
        if( cs % 2 ==0)
          demchan++;
        else
           demle++;
    }
    if(demle == demchan)
       return 1;
    else
       return 0;
}
int main ()
{
    int n,i,cuoi=0;
    cin >>n;
    int dau=pow(10,n-1);
    for(i=1; i<=n; i++)
    {
        cuoi = cuoi * 10 + 9;
    }
    int dem=0;
    for(i=dau; i<=cuoi; i++)
    {
        if( kt(i) == 1 )
        {
          cout <<i <<" ";
          dem++;  
        }
        if(dem == 10)
        {
          cout <<endl;
          dem=0;
        }
    }
}