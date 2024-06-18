#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void ct()
{
    int q; cin>>q;
    deque<int> dq;
    while(q--)
    {
        string s; cin>>s;
   
        if(s == "PUSHFRONT")
        {
           int x; cin>>x;
           dq.push_front(x);
        }
        if(s == "PRINTFRONT")
         {
            if(dq.empty())
              cout<<"NONE\n";
            else
               cout<<dq.front()<<endl;
         }
        if(s == "POPFRONT")
         {
            if(!dq.empty())
                dq.pop_front();
         }
        if(s == "PUSHBACK")
        {
              int x; cin>>x;
              dq.push_back(x);
        }
        if(s == "PRINTBACK")
        {
            if(!dq.empty())
              cout<<dq.back()<<endl;
            else
               cout<<"NONE\n";
        }
        if(s == "POPBACK")
        {
            if(!dq.empty())
                dq.pop_back();
        }

      }
}
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t = 1; 
    while(t--)
    {
        ct();
    }
    return 0;
}