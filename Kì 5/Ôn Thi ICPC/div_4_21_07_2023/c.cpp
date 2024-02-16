#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(char ch)
{
    if((   ch >= 'a' && ch <= 'z' )|| (ch >= 'A' && ch <= 'Z'))
      return true;
    return false;
}
void ct()
{
    char a[9][9];
    for(int i=1; i<=8; i++)
      for(int j=1; j<=8; j++)
        cin>>a[i][j];
    for(int i=1; i<=8; i++)
    {
        for(int j=1; j<=8; j++)
          if(check(a[i][j]))
          {
               string ans = "";
               ans = ans + a[i][j];
               for(int t = i+1; t<=8; t++)
                 if(check(a[t][j]))
                    ans += a[t][j];
                cout<<ans<<endl;
                return;
          }

    }
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