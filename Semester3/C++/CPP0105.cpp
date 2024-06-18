#include<bits/stdc++.h>
using namespace std;
void xuli(int x)
{
    int cs;
    bool kt=true;
    while( x != 0)
    {
        cs=x % 10;
        //cout<<cs<<endl;
        x = x / 10;
        if( (cs == 0) || (cs==6) ||( cs==8))
        {
            
        }
        else
           {
            kt=false;
            break;
           }       
    }
    if( kt==true)
       cout<<"YES" <<endl;
    else  
      cout<<"NO"  <<endl;

}
int main ()
{
    int t;
    cin >>t;
    int x;
    while( t--)
    {
        cin >>x;
        xuli(x);
    }
}