#include<bits/stdc++.h>
using namespace std;
int main ()
{
   int t,a[100009],n,i;
   cin >>t;
   while( t--)
   {
     cin >>n;
     int min=INT_MAX;
     for(i=0; i<n; i++)
        cin >>a[i];
    sort(a,a+n);
    for(i=0; i<n-1; i++)
    {
        if( abs(a[i] - a[i+1]) < min)
          min=abs(a[i] - a[i+1]);
    }
    cout <<min <<endl;
   }   

}