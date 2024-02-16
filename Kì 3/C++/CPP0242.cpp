#include<bits/stdc++.h>
using namespace std;
void xuli(int a[], int b[], int n)
{
    int  max=0,i,dd=0;
        for(i=1; i<=n; i++)
        {
            for(int j=n; j>=i; j--)
            {
                if( a[j] - a[i-1] == b[j] - b[i-1])
                {  
                    dd=j-i+1;
                    if(dd > max)
                      max=dd;
                }
            }
        }
    cout<<max<<"\n";
}
void ct()
{
    int n,t,i,a[10000], b[10000];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=1; i<=n; i++)
          cin>>a[i];
        for(i=1; i<=n; i++)
          cin>>b[i];
        a[0]=0;
        b[0]=0;
        for(i=1; i<=n; i++)
        {
            a[i]=a[i]+a[i-1];
            b[i]=b[i]+b[i-1];
        }
        xuli(a,b,n);
       
    }
}
int main ()
{
    ct();
}