#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(char ch)
{
    if(ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^')
       return true;
    return false;
}
int uutien(char ch)
{
    // sắp xếp theo mức độ ưu tiên, với độ độ ưu tiên của mũ là lớn nhất giảm dần là  *, / , + , -
    if(ch == '+' || ch =='-')
      return 2;
    if(ch == '*' || ch == '/')
       return 3;
    if(ch == '^')
        return 4;
    return 1;// mặc định dấu ngoạc nhỏ nhất để trường hợp các biểu thức ở trong dấu ngoặc sẽ  không xét luôn 
}
void ct()
{
    string s; cin>>s;
    string ans="";
    stack<char> st;
    for(char ch : s)
    {
        if(ch == '(')
           st.push(ch);
        else if(ch == ')')
             {
                while(st.top() != '(')
                {
                    ans += st.top();
                    st.pop();
                }
                st.pop();// các phân tử trong dấu ngoặc mặc đinh sẽ được tính mà không cần xét độ ưu tiên 
             }
             else if(check(ch))
                   {
                        while(!st.empty() && uutien(st.top()) >= uutien(ch))
                        {
                            ans += st.top();
                            st.pop();
                        }
                        // sau vòng while sẽ hết tất cả các dấu có độ ưu tiên lớn hơn ch trong stack
                        st.push(ch);
                   }
                   else
                      ans += ch;// các kí tự được cộng liên tiếp vào xâu
    }
    while(!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    cout<<ans<<endl;
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