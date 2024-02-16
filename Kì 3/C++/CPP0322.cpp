#include<bits/stdc++.h>
using namespace std;
void xuli(string a, string b)
{
        while(a.length() < b.length())
             a ='0'+a;
        while(a.length() > b.length())
             b='0'+b;
        int nho=0,n=a.length(),i,cs1,cs2;
        string ans="";
        for(i=n-1; i>=0; i--)
        {
            cs1=a[i]-'0';
            cs2=b[i]-'0';
            int kq=cs1+cs2+nho;
            nho=0;
            if(kq>9)
            {
                kq=kq-10;
                nho=1;
            }
            char ch=kq+'0';
            ans=ch+ans;
        }
        if(nho != 0)
          cout<<nho;
        cout<<ans<<endl;
        
}
void ct()
{
    int t;
    cin>>t;
    string a,b;
    while(t--)
    {
        cin>>a>>b;
        xuli(a,b);
    }
}
int main ()
{
    ct();
}