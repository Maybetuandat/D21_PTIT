#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//thuật toán là tìm lớn hơn bên phải và bé hơn bên phải, kết quả là minn[maxx] luu y truong hop bang -1
void ct()
{
  int n; cin>>n;
  int a[n];
  for(int &x : a)
     cin>>x;
    stack<int> st;
    vector<int> maxx, minn;
  //tim phan greater ben phai
  for(int i=n-1; i>=0; i--)
  {
      while(!st.empty() && a[st.top()] <= a[i])
        st.pop();
      if(st.empty())
        maxx.push_back(-1);
      else 
         maxx.push_back(st.top());
      st.push(i);
  }   
  reverse(maxx.begin(), maxx.end());
  //tim phan smaler ben trai
  stack<int> st1;
  for(int i=n-1; i>=0; i--)
  {
    while(!st1.empty() && a[st1.top()] >= a[i])
          st1.pop();
    if(st1.empty())
      minn.push_back(-1);
    else
          minn.push_back(a[st1.top()]);
      st1.push(i);
  }
  reverse(minn.begin(), minn.end());
  for(int x : maxx)
  {
    if(x != -1)
      cout<<minn[x]<<" ";
    else   
       cout<<x<<" ";
  }
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