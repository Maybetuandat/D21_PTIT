#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,k;
    cin >>t;
    cin.ignore();
    set<char> a;
    string s;
    while( t--)
    {
        cin>>s;
        cin>>k;
        for( char x: s)
        {
            a.insert(x);
        }
        if( 26-a.size() <=k)
        {
            cout<<"1\n";
        }
        else
          cout<<"0\n";
    }
}