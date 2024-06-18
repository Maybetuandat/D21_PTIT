#include<bits/stdc++.h>
using namespace std;
void xuli(int a, int m)
{
    bool kt=false;
    for(int i=0; i<m; i++)
    {
        if( (i * a) % m == 1 )
        {
            cout <<i <<endl;
            kt=true;
            break;
        }
    }
    if( kt==false)
    {
        cout <<"-1" <<endl;
    }
}
int main ()
{
    int t,a,m;
    cin >>t;
    while (t--)
    {
        cin >>a >>m;
        xuli(a,m);
    }
}