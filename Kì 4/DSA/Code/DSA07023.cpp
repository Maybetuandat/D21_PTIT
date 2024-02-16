#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void ct()
{
    string s; getline(cin, s);
    stringstream ss(s);
    string cmp;
    stack<string> st;
    while(ss >> cmp)
    {
        st.push(cmp);
    }
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin>>t;
    cin.ignore();
    while(t--)
    {
        ct();
    }
    return 0;
}
