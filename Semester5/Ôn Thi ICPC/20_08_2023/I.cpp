#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void xuli(string s)
{
    int dem[10] = {0};
    for(char ch : s)
    {
        int k = ch - '0';
        dem[k]++;
    }
    int minn = INT_MAX;
    int index;
    for(int i=1; i<=9; i++)
    {
        if(dem[i] < minn)
        {
            minn = dem[i];
            index = i;
        }
    }
    for(int i=0; i<= minn; i++)
        cout<<index;
    cout<<endl;
}
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
          string s; cin>>s;
          xuli(s);
    }
    return 0;
}