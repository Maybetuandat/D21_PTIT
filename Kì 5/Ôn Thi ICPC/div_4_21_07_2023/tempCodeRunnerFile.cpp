#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 int dem[200009];
int tinh(int k)
{
    int sum = 0;
    for(int i=1; i<= sqrt(k); i++)
    {
        if(k % i == 0)
        {
             int t = k / i;
             if(t != i)
             {
                sum = sum + dem[t] + dem[i];
             }
             else
               sum += dem[i];
        }
    }
    return sum;
}
void ct()
{
    int n; cin>>n;
    memset(dem, 0, sizeof(dem));
    for(int i =0; i<n; i++)
    {
        int x; cin>>x;
        dem[x]++;
    }
    int maxx = 0;
    for(int i=n; i>=1; i--)
    {
            maxx = max(maxx, tinh(i));
    }
    cout<<maxx<<endl;

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