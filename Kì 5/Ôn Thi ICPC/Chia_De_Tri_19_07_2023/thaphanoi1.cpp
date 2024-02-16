#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<string> ans;

void thaphn(int n, int s,  int t)
{
    if( n == 1)
    {
           string res = string(1, 'A' + s - 1) + string(1, 'A' + t - 1);
          ans.push_back(res);
          ans.push_back(res);
          return;
    }
    thaphn(n-1,s,  6 - s - t);
    thaphn(1, s, t);
    thaphn(n-1, 6 - s - t, t);
   
}
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin>>n;
    
   
    thaphn(n / 2,1, 3);
    cout<<ans.size()<<endl;
    for(string x : ans)
      cout<<x<<endl;
}