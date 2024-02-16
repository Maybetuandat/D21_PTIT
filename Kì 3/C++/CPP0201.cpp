#include<bits/stdc++.h>
using namespace std;
int main ()
{
   int t,n,i;
   cin >>t;
   while( t--)
   {
     cin >>n;
     vector <int> a(n);
     int min=INT_MAX;
     for(i=0; i<n; i++)
        cin >>a[i];
    sort(a.begin(),a.end());
    for(i=0; i<n-1; i++)
    {
        if( abs(a[i] - a[i+1]) < min)
          min=abs(a[i] - a[i+1]);
    }
    cout <<min <<endl;
   }   

}