#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >>t;
    while(t--)
    {
        int n,i,x;
        set<int> cs;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin >>x;
            while( x != 0)
            {
                cs.insert(x % 10);
                x=x/10;
            }
        }
        for(int ch : cs)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}