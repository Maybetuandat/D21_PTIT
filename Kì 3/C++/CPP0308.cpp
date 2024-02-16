#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long t,i,j;
    cin >>t;
    string s;
    while( t--)
    {
        cin>>s;
        long long  dem1['Z']={0};
        long long  dem2['z']={0};
        long long k=s.length();
        for(i=0; i<k; i++)
        {
            if( 'A' <=s[i] && s[i] <='Z')
            dem1[s[i]]++;
            else
              dem2[s[i]]++;
        }
        for(i=0; i<k; i++)
        {
            if( 'A' <=s[i] && s[i] <='Z')
            {
                if( dem1[s[i]] == 1)
                  cout<<s[i];
            }
            else
            {
                if( dem2[s[i]] == 1)
                  cout<<s[i];
            }
        }
        cout <<"\n";
    }
}