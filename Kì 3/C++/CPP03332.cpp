#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    getline(cin,s);
    vector<string> ss;
    stringstream ss1(s);
    string cmp;
    while(ss1 >> cmp)
    {
        ss.push_back(cmp);
    }
    int n=ss.size();
    for(int i=n - 1; i>=0; i--)
    {
        for(int j=0; j<ss[i].length(); j++)
        {
            ss[i] [j]= tolower(ss[i] [j]);
        }
    }
     cout<<ss[n-1];
    for(int i=0; i<n-1; i++)
    {
        cout<<ss[i][0];
    }
    cout<<"@ptit.edu.vn";
}