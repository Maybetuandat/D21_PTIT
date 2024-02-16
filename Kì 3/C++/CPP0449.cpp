//https://code.ptit.edu.vn/student/question/CPP0449
//KHOẢNG CÁCH BẰNG X

#include<bits/stdc++.h>
using namespace std;
void xuli(int n, int x)
{
    int a[n+3],i;
    for(i=0; i<n; i++)
      cin>>a[i];
    sort(a, a+n);
    int k=0;
    for(i=0; i<n; i++)
    {
        if(binary_search(a, a+n, a[i] + x) == 1)
        {
            cout<<"1"<<endl;
            k=1;
            break;
        }
    }
    if(k == 0)
      cout<<"-1"<<endl;
}
void ct()
{
    int t,n,x; cin>>t;
    while(t--)
    {
        cin>>n  >>x;
        xuli(n,x);
    }

}
int main ()
{
    ct();
}