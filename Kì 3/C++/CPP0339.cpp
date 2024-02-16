#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    long long i,n,tong;
    string s;
    cin >>t;
    while( t--)
    {
        long long dem1['z'+1]={0};
        long long dem2['Z'+1]={0};
         cin>>s;
         tong=s.length();
         n=s.length();
        for( i=0; i<n; i++)
        {
            if(  'a' <=s[i] && s[i] <='z' )
               dem1[s[i]]++;
            else
              if('A' <=s[i] && s[i] <='Z' )
                dem2[s[i]]++;
        }
        for(char ch='a'; ch<='z'; ch++)
        {
            if(dem1[ch] > 1)
            {
                tong = tong +dem1[ch] * (dem1[ch] - 1)  / 2;
            }
        }
        for(char ch='A'; ch<='Z'; ch++)
        {
            if(dem2[ch] > 1)
            {
                tong = tong +dem2[ch] * (dem2[ch] - 1)  / 2;
            }
        }
         cout<<tong<<endl;
    }
}