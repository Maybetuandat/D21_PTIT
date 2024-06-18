#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(char ch)
{
    if(ch == '+' || ch == '-' || ch == '*' || ch == '/')
      return true;
    return false;
}
void ct()
{
        string s; cin>>s;
        stack<string> st;
        int n = s.length();
        for(int i = n-1; i>=0; i--)
        {
            if(!check(s[i]))
               st.push(string(1, s[i]));
            else
            {
                  string s1 = st.top(); st.pop();
                  string s2 = st.top(); st.pop();
                  string adu = '(' +  s1 + s[i] + s2 + ')';
                  st.push(adu);
    
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
