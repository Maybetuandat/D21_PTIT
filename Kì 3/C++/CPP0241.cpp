#include<bits/stdc++.h>
using namespace std;
void xuli(int a[], int n)
{
    int i,l=0,r=n-1;
    int dem=0;
    while(l<=r)
    {
        if( a[l] == a[r] )
        {
            l++;
            r--;
        }
        else
        {
            if(a[l] < a[r])
            {
                a[l+1]=a[l+1] + a[l];
                l++;
                dem++;
            }
            else
            {
                a[r-1]+=a[r];
                r--;
                dem++;
            }
        }
    }
    cout<<dem<<endl;
}
void ct()
{
    int t,n,i,a[10000];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++)
           cin>>a[i];
        xuli(a,n);
    }
}
int main ()
{
    ct();
}