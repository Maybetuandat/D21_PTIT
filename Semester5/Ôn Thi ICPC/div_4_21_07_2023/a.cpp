#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool kt(int a, int b, int c)
{
    if(a + b >= 10)
      return  true;
    if(b + c >= 10)
      return true;
    if(a + c >= 10)
      return true;
    return false;
}
void ct()

{
    int a, b, c; cin>>a>>b>>c;
    if(kt(a,b,c))
      cout<<"YES\n";
    else
      cout<<"NO\n";
}
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        ct();
    }
    return 0;
}