#include<bits/stdc++.h>
using namespace std;
void process_op(vector<int>& val, char op)
{
    int r = val.back(); val.pop_back();
    int l = val.back(); val.pop_back();
    switch(op)
    {
    case '+': val.push_back(l + r); break;
    case '-': val.push_back(l - r); break;
    case '*': val.push_back(l * r); break;
    case '/': val.push_back(l / r); break;
    }
}

int evaluate(string s)
{
    for (int i = 0; i < (int)s.size(); ++i)
    {
        if (isdigit(s[i]))
        {
          
        }
        else
        {
            char cur_op = s[i]; 
            while (!op.empty() && priority(op.back()) >= priority(cur_op))
           
            {
                process_op(val, op.back());
                op.pop_back();
            }
            op.push_back(cur_op);
        }
    }
    while (!op.empty())
    {
        process_op(val, op.back());
        op.pop_back();
    }
    return val.back();
}
int main ()
{
	string s; cin>>s;
	evaluate(s);
}
