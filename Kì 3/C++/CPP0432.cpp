//https://code.ptit.edu.vn/student/question/CPP0432
//SẮP XẾP THEO CHỮ SỐ


#include<bits/stdc++.h>
using namespace std;
bool cmp(string a, string b)
{
    string s1=a+b;
    string s2=b+a;
    return s1>s2;
}
void xuli(int n)
{
    vector<string> ans(n);
    int i;
    for(i=0; i<n; i++)
       cin>>ans[i];
    sort(ans.begin(), ans.end(),cmp);
    for(string x: ans)
      cout<<x;
    cout<<endl;
}
void ct()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        xuli(n);
    }
}
int main ()
{
    ct();
}