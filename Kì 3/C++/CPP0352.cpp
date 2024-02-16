#include<bits/stdc++.h>
using namespace std;
string chuanhoa(string s)
{
    for(int i=0; i<s.length(); i++)
    {
        s[i]=tolower(s[i]);
    }
    return s;
}
string  xuli(string s)
{
    string tmp;
    stringstream ss(s);
    vector<string> ans;
    while(ss>>tmp)
    {
        tmp=chuanhoa(tmp);
        ans.push_back(tmp);
    }
    string result="";
    result=result + ans[ans.size() - 1] ;
    for(int i=0; i<ans.size() - 1; i++)
       result=result+ans[i][0];
    result=result+"@ptit.edu.vn";
    return result;
}
void ct()
{
    int t,i; cin>>t;  cin.ignore();
    string s;
    map<string, int> kq;
    while(t--)
    {
        getline(cin,s);
        string test=xuli(s);
        kq[test]++;
        if(kq[test] == 1)
          cout<<test<<endl;
        else
        {
            for( i=0; i<test.length(); i++)
               if(test[i] == '@')
                  break;
            string adu=to_string(kq[test]);
            test.insert(i,adu);
            cout<<test<<endl;
        }

    }
}
int main ()
{
    ct();
}