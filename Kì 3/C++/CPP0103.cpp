#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    double tong=0;
    for(int i=1; i<=n; i++)
    {
        tong =tong + (double) 1 / i;
    }
    cout <<fixed    <<setprecision(4)    <<tong <<endl;
}