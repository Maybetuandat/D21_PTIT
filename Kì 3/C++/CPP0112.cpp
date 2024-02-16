#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    double x1,y1,x2,y2;
    double kc;
    cin >>t;
    while(t--)
    {
        cin >>x1 >>y1 >>x2 >>y2;
        kc=(double) sqrt( (x1-x2) * (x1-x2) +(y1-y2) * (y1-y2) );
        cout<<fixed<<setprecision(4) <<kc <<endl;
    }
}