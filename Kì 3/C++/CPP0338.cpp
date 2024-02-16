#include<bits/stdc++.h>
using namespace std;
void xuli(string s, int k)
{
        int n=s.length();
        int dem=0;
        for(int i=0; i<n; i++)
        {
            set<char> ss;
            for(int j=i; j<n; j++ )
            {
              ss.insert(s[j]);
              if(ss.size() == k)
                  dem++;
              else
                 if(ss.size() > k)
                   break;
            }
        }
        cout<<dem<<endl;
}
void ct()
{
    int t,k; cin>>t;
    string s="";
    while(t--)
    {
        cin>>s>>k;
        xuli(s,k);
    }
}
int main()
{
    ct();
}