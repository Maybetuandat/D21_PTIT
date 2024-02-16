#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void ct()
{
    int n; cin>>n;
    queue<int> q;
    q.push(9);
    if(9 % n == 0)
    {
        cout<<"9\n";
        return;
    }
    while(1)
    {
        int k =q.front(); q.pop();
        int k1 = k * 10;
        if(k1 % n == 0)
        {
            cout<<k1<<endl;
            return;
        }
        q.push(k1);
         k1 = k * 10 + 9;
        if(k1 % n == 0)
        {
            cout<<k1<<endl;
            return;
        }
        q.push(k1);
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