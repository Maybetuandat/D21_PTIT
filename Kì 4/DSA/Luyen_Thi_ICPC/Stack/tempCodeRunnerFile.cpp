#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> ans;
void in()
{
    cout<<"(";
    for(int i=0; i<ans.size() - 1; i++)
      cout<<ans[i]<<" ";
    cout<<ans.back();
    cout<<") ";
}
void dq(int lm, int rm)
{
    for(int j=lm; j>=1; j--)
    {
        if(rm >= j)
        {
            ans.push_back(j);
            if(rm - j == 0)
              in();
            else
              dq(j, rm-j);
              ans.pop_back();
        }
    }
}
void ct()
{
    int n; cin>>n;
    dq(n, n);   
    cout<<endl;
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