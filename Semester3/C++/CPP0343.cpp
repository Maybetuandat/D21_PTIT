#include<bits/stdc++.h>
using namespace std;
int main ()
{
        int t;
        cin>>t;

        while( t--)
        {
            char ch=' ';
            long long n=0;    
            long long a[10009];
            long long  demchan=0,demle=0;
            while( ch != '\n')
            {
                cin>>a[n];
                if( a[n] % 2 == 0)
                  demchan++;
                else
                  demle++;
                n++;
                ch=getchar();
            }
            if( n % 2 == 0 )
            {
                if( demchan > demle)
                  cout<<"YES" <<endl;
                else
                  cout<<"NO\n";
            }
            else
            {
                if( demle >demchan)
                {
                    cout<<"YES\n";
                }
                else
                  cout<<"NO\n";
            }
        }   
}