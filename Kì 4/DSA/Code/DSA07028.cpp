#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void ct()
{
    int n; cin>>n;
    int  ans[n + 1];
    vector<int> a(n + 1);
    for(int i=1; i<=n; i++)
      cin>>a[i];
    a[0] = INT_MAX;
    stack<int> st;
    st.push(0);
    for(int i=1; i<=n; i++)
    {
      while(!st.empty() && a[st.top()] <= a[i])
        st.pop();
      if(st.empty())
        ans[i] = 1;
      else
         ans[i] = i - st.top();
        st.push(i);
    }
   for(int i=1; i<=n; i++)
     cout<<ans[i]<<" ";
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