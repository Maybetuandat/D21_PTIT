#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void ct()
{
    string s;
    int k;
    cin>>s;
    cin>>k;
    string ans = s;
        int j = 0;
        int dem = 0;
        while(j < ans.length())
        {
            if(ans[j] < ans[j+1])
            {
                ans.erase(j, 1);
                dem++;
                if(dem == k)
                  break;
                if(j > 0)
                   j--;
            }
            else
              j++;
            
        }
    if(dem != k)
    {
       int  coe = k - dem;
        ans.erase(ans.length() -coe, coe );
    }
    cout<<ans<<endl;
}
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t = 1;

    while(t--)
    {
        ct();
    }
    return 0;
}