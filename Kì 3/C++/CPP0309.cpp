#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >>t;
    string s,tmp;
    while( t--)
    {
        cin.ignore();
        getline(cin,s);
        stringstream ss(s);
        long long dem=0;
        while( ss >> tmp)
        {
            dem++;
        }
        cout <<dem <<endl;
    }
}