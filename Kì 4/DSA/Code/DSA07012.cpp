#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(char ch)
{
    if(ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^')
       return true;
    return false;
}
void ct()
{
    string s; cin>>s;
    stack<string> st;
    for(char ch : s)
    {
        if(!check(ch))
            st.push(string(1, ch));
        else
        {
            string s1 = st.top(); st.pop();
            string s2 = st.top(); st.pop();
            string cmp = '(' + s2 + ch + s1 + ')';
            st.push(cmp);
        }
    }
    cout<<st.top()<<endl;
}
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        ct();
    }
    return 0;
}