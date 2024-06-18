#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[100];
int n;
string adu = "ABC";
vector<string> ans;
void hanoi(int n, int dest)
{
    if(n == 0)
      return;
        if(a[n] != dest)
        {
            hanoi(n-1, 3 - dest - a[n]);
           
            string res = string(1, adu[a[n]]) + string(1, adu[dest]);
            ans.push_back(res);
           a[n] = dest;
        }
      hanoi(n-1, dest);
}
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin>>n;

   for(int i=1; i<=n; i++)
   {
    char ch; cin>>ch;
    a[i] = ch - 'A';

    }
  
    hanoi(n, 2);
    cout<<ans.size()<<endl;
    for(string x : ans)
      cout<<x<<endl;
}