#include<bits/stdc++.h>
using namespace std;
void xuli(string s)
{
    int n=s.length();
    set<int> ss={};
    bool kt=true;
    for(int i=0; i<n; i++)
    {
        int x= s[i] -'0';
        if( 0<=x && x<=9)
           ss.insert(x);
        else
        {
            kt=false;
            break;
        }
    }
    if(!kt)
    {
        cout<<"INVALID"<<endl;
        return;
    }
    if(ss.size() == 10)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    
}
void ct()
{
    int t;
    cin >>t;
    string s;
    while(t--)
    {
        cin>>s;
        if(s[0] == '0')
           cout<<"INVALID"<<endl;
        else
            xuli(s);
    }
}
int main ()
{
    ct();
}