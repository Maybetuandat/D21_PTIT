#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int k,t,a,b,i,j,l,m,mang[100][100],kq[100] [100];
    cin >>t;
    while( t--)
    {
        cin >>a >>b;
        for(i=1; i<=a; i++)
        {
            for(j=1; j<=b; j++)
              cin >> mang[i] [j];
        }
        for(i=1; i<=a; i++)
        {
            for( j=1; j<=b; j++)
            {
                if( mang[i] [j] == 1)
                {
                    for( k=1; k<=b; k++)
                       kq[i][k]=1;
                    for(k=1; k<=a; k++)
                       kq[k] [j]=1;
                }
            }
        }
        for(i=1; i<=a; i++)
        {
            for(j=1; j<=b; j++)
               cout<<kq[i] [j] <<" ";
            cout <<"\n";
        }
    }
}