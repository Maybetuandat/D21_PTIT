#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void ct()
{
        int n; cin>>n;
        int a[n];

        for(int &x : a)
          cin>>x;
        for(int i=0; i<n-1; i++)
        {
            if(a[i] > a[i+1])
             {
                cout<<"0\n";
                return;
              }
        }
          
        int minn = INT_MAX;
        for(int i=0; i<n - 1; i++)
        {
                minn = min(minn, a[i+1] - a[i]);
        }
        cout<<(minn )/ 2 + 1<<endl;
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