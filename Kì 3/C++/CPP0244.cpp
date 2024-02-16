#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,x,i;
    cin >>n;
    set<int> ss;
    for( i=1; i<=n; i++)
    {
      cin>>x;
      ss.insert(x);
    }
    for(int  x : ss)
    {
      cout <<x<<" ";
    }
}