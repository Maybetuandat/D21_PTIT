#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int ucln(int a, int b)
{
    int du = 0;
    while( b != 0)
    {
        du = a % b;
        a = b;
        b = du;
    }
    return a;
}
void ct()
{
    int n; cin>>n;
    int a[n+1], b[n+1];
    
    for(int i=1; i<=n; i++)
        cin>>a[i];

    
     for(int i=1; i<=n; i++)
        cin>>b[i];

    int uclna = a[1];
    for(int i=2; i<=n; i++)
      uclna = ucln(uclna, a[i]);
    int uclnb = b[1];
    for(int i=2; i<=n; i++)
      uclnb = ucln(uclnb, b[i]);
    int uclncot[n+1];
    set<int> st;
    for(int i=1; i<=n; i++)
    {
        int x = ucln(a[i], b[i]);
        st.insert(x);
    }
    if()
    

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