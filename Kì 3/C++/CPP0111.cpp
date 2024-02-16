#include<bits/stdc++.h>
using namespace std;
void xuli(long long n)
{
    int a[100]={0} , dem=0 ,i;
    while( n > 0)
    {
        dem++;
        a[dem] = n % 10;
        n= n / 10;
    }
    // for(i=dem; i>=1; i--)
    //   cout <<a[i];
    // cout<<"\n";
    int kt=1;
    for( i=1; i<dem ; i++)
    {
        if( abs( a[i] - a[i+1] ) != 1 )
        {
            kt=0;
            break;
        }
    }
    if( kt)
    {
        cout<<"YES\n";
    }
    else
      cout<<"NO\n";
}
int main()
{
    int t;
    long long n;
    cin >>t;
    while( t-- )
    {
        cin >> n;
        xuli(n);
    }
}