#include<bits/stdc++.h>
using namespace std;
int check(char ch)
{
    if( ch == 'U' || ch=='O' || ch=='A' || ch=='E' || ch=='I' || ch == 'Y' || ch == 'u' || ch=='o' || ch=='a' || ch=='e' || ch=='i' || ch=='y')
    {
        return 0;
    }
    else
      return 1;
}
void xuli( string s)
{
    int n=s.length();
    for(int i=0; i<n; i++)
    {
        if( check(s[i]))
        {
            s[i]=tolower(s[i]);
            cout<<"."<<s[i];
        }
    }
}
int main ()
{
    string s;
    cin >>s;
    xuli(s);
}