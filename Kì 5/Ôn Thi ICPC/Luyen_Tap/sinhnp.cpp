#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[4][4];
int x[]= {0, 0, -1, 1};
int y[] = { -1, 1, 0, 0 };
int pheplat(int np[])
{
    int dem  = 0;
    for(int  i=1; i<= 16; i++)
        if(np[i] == 1)
          dem++;
    
    return dem; 
}
bool kt(int b[4][4])
{
    int dem1 =0, dem0 =0;
    for(int i=0; i<4; i++)
      for(int j=0; j<4; j++)
        if(b[i][j] == 1)
            dem1++;
        else
           dem0++;
    if(dem0 == 16 || dem1 == 16)
      return true;
    return false;
}
int convert(int x)
{
    if(x == 0)
      return 1;
    return 0;
}
bool check(int np[20], int a[4][4])
{
    int b[4][4];
    for(int i=0; i<4; i++)
      for(int j=0; j<4; j++)
         b[i][j] = a[i][j];

	
	    

    for(int i=1; i<=16; i++)
    {
        if(np[i] == 1)
        {
            int hang = (i-1) / 4;
            int cot = (i-1) % 4;
            for(int k=0; k<4; k++)
            {
                int i1 = hang + x[k];
                int j1 = cot + y[k];
                if( i1 >= 0 && j1 <= 3 )
                {
                    b[i1][j1]  = convert(b[i1][j1]);
                }
            }
           
        }
    }
    if(kt(b))
      return true;
    return false;
}
int main ()
{
    for(int i=0; i< 4; i++)
    {
        for(int j=0;  j< 4; j++)
        {
            char ch;  cin>>ch;
            if(ch == 'b')
              a[i][j] = 0;
            else
               a[i][j] = 1;

        }
    }
  
    
    int np[20];
    for(int i=1; i<=16; i++)
       np[i] = 0;
    while(1)
    {
        if(check(np, a) )
        {
            cout<<pheplat(np)<<endl;
            return  0;
        }
        int i = 16;
        while(i > 0 && np[i] == 1 )
        {
                np[i] = 0;
                i--;
        }
        if( i  == 0)
        {
            cout<<"-1\n";
            return 0;
        }
        np[i]++;

           
           
    }
}