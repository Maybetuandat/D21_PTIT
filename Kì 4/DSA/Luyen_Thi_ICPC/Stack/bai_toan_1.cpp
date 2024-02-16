//#include<bits/stdc++.h>
//using namespace std;
//void process_op(vector<int>& val, char op)
//{
//    int r = val.back(); val.pop_back();
//    int l = val.back(); val.pop_back();
//    switch(op)
//    {
//    case '+':  val.push_back(l + r); break;
//    case '-': val.push_back(l - r); break;
//    }
//}
//int xuli(string s)
//{
//	vector<int> val;
//    vector<char> op;
//    int i = 0;
//   while(i < s.length())
//    {
//        if (isdigit(s[i]))
//        {
//            int number = 0; 
//            while (i < s.size() && isdigit(s[i]))
//            {
//                number = number * 10 + s[i] - '0';
//                ++i;
//            }
//            val.push_back(number);
//        }
//        else
//        {
//            if (!op.empty())
//            {
//                process_op(val, op.back()); 
//                op.pop_back();
//            }
//            op.push_back(s[i]);
//            i++;
//        }
//    }
//    while(!op.empty())
//    {
//    	process_op(val, op.back()); 
//        op.pop_back();
//	}
//    return val.back();
//}
//int main ()
//{
//	string s; cin>>s;
//	cout<<xuli(s)<<endl;
//}
#include<bits/stdc++.h>
using namespace std;
int priority(char op)
{
    if (op == '+' || op == '-') return 1;
    else return 2;
}
void process_op(vector<int>& val, char op)
{
    int r = val.back(); val.pop_back();
    int l = val.back(); val.pop_back();
    switch(op)
    {
    case '+':  val.push_back(l + r); break;
    case '-': val.push_back(l - r); break;
    case '*': val.push_back(l*r); break;
    case '/': val.push_back(l / r);  break;
    }
}
int xuli(string s)
{
	vector<int> val;
    vector<char> op;
    int i = 0;
   while(i < s.length())
    {
        if (isdigit(s[i]))
        {
            int number = 0; 
            while (i < s.size() && isdigit(s[i]))
            {
                number = number * 10 + s[i] - '0';
                ++i;
            }
            val.push_back(number);
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
            i++;
        }
    }
    while(!op.empty())
    {
    	process_op(val, op.back()); 
        op.pop_back();
	}
    return val.back();
}
int main ()
{
	string s; cin>>s;
	cout<<xuli(s)<<endl;
}
