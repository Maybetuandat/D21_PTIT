#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void thaphn(int n, int s, int t)
{
    if( n == 0)
      return ;
  if(n == 1)
  {
    if((s + 1 ) % 3 == t)
    {
      cout<<char(s + 'A');
      return;
    }
    else
    {
         cout<<char(s + 'A');
         cout<<char((s + 1 ) % 3 + 'A');

      return;
    }
  }
    if((s + 1) % 3 == t)
    {
       
        thaphn(n-1, s, 3 - s - t);
         cout<<char('A' + s);
        thaphn(n-1, 3 - s - t, t);
    }
    else
    {
          thaphn(n-1, s, t );
        cout<<char('A' + s);
        thaphn(n-1, t, s);
         cout<<char('A' + 3 -s  - t);
        
      thaphn(n-1, s, t);
    }
      
    
    
}
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin>>n;
  thaphn(n, 0, 2);
    return 0;
} 