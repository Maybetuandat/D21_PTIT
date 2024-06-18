#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string a,b;
    a="A B B A D C C A B D C C A B D";
    b="A C C A B C D D B B C D D B B";
    int t,n=a.length(),ma,i;
    cin>>t;
    string s;
    int dem=0;
    while( t--)
    {
        cin>>ma;
        cin.ignore();
        getline(cin,s);
        int dem=0;
        if( ma == 101)
        {
            for(i=0; i<n; i++)
            {
                if(a[i] == s[i] && a[i] !=' ')
                dem++;
            }
        }
        else
        {
            for(i=0; i<n; i++)
            {
                if(b[i] == s[i] && b[i] !=' ')
                   dem++;
            }
        }
        double diem =(double) 10/15*dem;
        cout<<fixed<<setprecision(2)   <<diem   <<endl;
        //cout<< dem <<"   " <<ma <<endl;
       // cout<<s<<endl;
    }
}