#include<bits/stdc++.h>
using namespace std;
bool check(char ch)
{
    if( ch <='9' && ch >='0')
       return true;
    return false;
}
void xuli(string s)
{
      int i,n=s.length();
    long long max=INT_MIN;
    i=0;
    while(i<n)
    {
        if(check(s[i]))
        {
            string ss="";
            int j=i;
            while(check(s[j+1])  && j+1 < n )
                  j++;
            long long kq=0;
            for(int t=i; t<=j; t++)
            {
                int k=s[t]-'0';
                kq=kq*10+k;
            }
            if(kq > max)
              max=kq;
            i=j+1;
        }
        else
           i++;
    }
    cout<<max<<endl;
}
void ct()
{
    int t; cin>>t;
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