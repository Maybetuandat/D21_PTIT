#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void ct()
{
    int n; cin>>n;
    int a[n], r[n];
    for(int &x : a)
       cin>>x;
    stack<int> st;
    
    for(int i=n-1; i>=0; i--)
    {
        while(!st.empty() && a[st.top()] <= a[i])
          st.pop();
        if(st.empty())
           r[i] = -1;
        else
           r[i] = a[st.top()];
        st.push(i);
    }   
    for(int x : r)
      cout<<x<<" ";
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