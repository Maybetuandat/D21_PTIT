#include<bits/stdc++.h>
using namespace std;
int main ()
{
    char ch;
    int t;
    cin>>t;
    while (t--)
    {
        cin>>ch;
        if( ('A'<=ch)  && (ch<='Z') )
        {
            ch=tolower(ch);
            cout<< ch <<endl;
        }
        else
        {
            if('a' <=ch && ch<='z')
            {
                ch=toupper(ch);
                cout <<ch <<endl;
            }
        }
    }
}