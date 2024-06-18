//https://code.ptit.edu.vn/student/question/CPP0713
//LIỆT KÊ HOÁN VỊ


#include<bits/stdc++.h>
int n,check[10000],a[1000];
using namespace std;
void in(int n)
{
    for(int i=1; i<=n; i++)
       cout<<a[i];
    cout<<" ";
}
void sinh(int i)
{
    int j;
    for( j=1; j<=n; j++)
    {
        if(check[j] == 0)
        {
            a[i]=j;
            check[j]=1;
            if(i==n)
            {
                in(n);
            }
            else
               sinh(i+1);
            check[j]=0;
        }
    }
}
void ct()
{
    int t; cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1; i<=n; i++)
           check[i]=0;
        sinh(1);
        cout<<endl;
    }
}
int main ()
{
    ct();
}