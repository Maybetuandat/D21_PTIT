#include<bits/stdc++.h>
using namespace std;
int n,m;
void nhap( char **p)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
          cin>>p[i][j];
    }
}
void inmatran(char **p )
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
          cout<<p[i][j]<<" ";
        cout<<endl;
    }
}
int main ()
{
    char **p;
    int i,j;
    cin>>n>>m;
    p = new char* [100];
    for(i=0; i<n; i++)
      p[i] = new char[100] ;
    
    nhap(p);
    inmatran(p);
 //   xuli(p);


}