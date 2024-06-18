#include<bits/stdc++.h>
using namespace std;
bool kiemtrathuannghich(string s)
{
    int n=s.length();
    for(int i=0; i<n/2; i++)
    {
        if(s[i] != s[n-i-1])
           return 0;
    }
    return 1;
}
char convertion(char ch)
{
    if( ch == 'A' || ch == 'B' || ch == 'C' || ch == 'a' || ch == 'b' || ch == 'c')
       return '2';
    if( ch == 'D' || ch == 'E' || ch == 'F' || ch == 'd' || ch == 'e' || ch == 'f')
       return '3';
    if( ch == 'G' || ch == 'H' || ch == 'I' || ch == 'g' || ch == 'h' || ch == 'i')
       return '4';
    if( ch == 'J' || ch == 'K' || ch == 'L' || ch == 'j' || ch == 'k' || ch == 'l')
       return '5';
    if( ch == 'M' || ch == 'N' || ch == 'O' || ch == 'm' || ch == 'n' || ch == 'o')
       return '6';
    if( ch == 'P' || ch == 'Q' || ch == 'R' || ch == 'S' || ch == 'p' || ch == 'q' || ch == 'r' || ch == 's')
       return '7';
    if( ch == 'T' || ch == 'U' || ch == 'V' || ch == 't' || ch == 'u' || ch == 'v')
       return '8';
    if( ch == 'W' || ch == 'X' || ch == 'Y' || ch == 'Z' || ch == 'w' || ch == 'x' || ch == 'y' || ch == 'z')
       return '9';
    return '0';
}
void xuli(string s)
{
    string ss="";
    for(int i=0; i<s.length(); i++)
    {
        ss=ss+convertion(s[i]);
    }
    if(kiemtrathuannghich(ss))
      cout<<"YES\n";
    else
      cout<<"NO\n";
}
void ct()
{
    int t;   cin>>t;
    string s;
    while(t--)
    {   
        cin>>s;
        xuli(s);
    }
}
int main ()
{
    ct();
}