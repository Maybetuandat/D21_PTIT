#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void ct()
{
        int n,k; cin>>n>>k;
        
        vector<pair<int, int>> ans;
        ans.clear();

         ans.push_back({1, 0});
         ans.push_back({0, 1});
         for(int i=2; i<=k; i++)
         {
            pair<int, int> pr;
            pr.first = ans[i-1].first + ans[i-2].first;
            pr.second = ans[i-1].second + ans[i-2].second;
            ans.push_back(pr);
            int maxx = min(ans[i].first, ans[i].second);
            if(maxx > n)
            {
                cout<<"0\n";
                return;
            }
         }

         int x = ans[k].first;
         int y = ans[k].second;
        //  cout<<x<<" "<<y<<endl;
         int dem = 0;
         for(int i=0; i<= n / x; i++)
         {
              int j = (n - x * i) / y;
              if(i * x + j * y == n)
                dem++;
         }
         cout<<dem<<endl;
}
int main ()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL); cout.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        ct();
    }
    return 0;
}