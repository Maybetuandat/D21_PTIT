#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define faster  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
void ct()
{
    string s;
      getline(cin, s);
      stringstream ss(s);
      string cmp;
      vector<string> ans;
      while(ss >> cmp)
      {
            ans.push_back(cmp);
      }
      set<string> adu;
      adu.insert("and");
      adu.insert("of");
      adu.insert("in");
      string res = "";
      for(string x : ans)
      {
          if(adu.count(x) == 0)
          {
            res += x[0];
          }
      }
      cout<<res<<" "<<s<<endl;
}
int main ()
{
    faster;
    int t; cin>>t;
    cin.ignore();
    while(t--)
    {
        ct();
    }
    return 0;
}