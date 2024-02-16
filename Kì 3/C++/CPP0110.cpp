#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    string s;
    cin >> t;
    while(t--)
    {
        cin >> s;
        int length=s.length();
        int k=s.find("084");
        if( k<=length)
        {
            s.erase(k, 3);
        }
        cout << s <<endl;
    }
}