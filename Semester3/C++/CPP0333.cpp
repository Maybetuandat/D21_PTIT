#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    vector< string > vt;
    getline(cin,s);
    stringstream ss(s);
    string tmp;
    while( ss >>tmp)
    {
        vt.push_back( tmp);
    }
    int j,i,n=vt.size();
    for(i=0; i<n-1; i++)
    {
        for(j=1; j<vt[i].length(); j++)
        {
            vt[i] [j]= tolower(vt[i] [j]);
        }
        vt[i][0]=toupper(vt[i] [0]);
        if( i != n-2)
        {
            cout<<vt[i] <<" ";
        }
        else
        {
            cout<<vt[i] <<", ";
        }
    }
    for(j=0; j<vt[n-1].length(); j++)
    {
        vt[n-1][j]=toupper(vt[n-1] [j]);
    }
    cout<<vt[n-1];
}