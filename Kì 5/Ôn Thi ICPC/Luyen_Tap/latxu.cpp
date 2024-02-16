#include<bits/stdc++.h>
using namespace std;
int x[]= {-1, 0, 0, 1};
int y[] = {0, -1, 1, 0};
int convert(int x)
{
  if(x == 0)
    return 1;
  return 0;
}
bool xuli(int np[],int b[][4] )
{
    for(int i=1; i<=16; i++)
    {
      if(np[i] == 1)
      {
          int k = i-1;
          int hang = k / 4;
          int cot = k % 4;
          b[hang][cot] = convert(b[hang][cot]);
          for(int t =0; t <4; t++)
          {
              int i1 = hang + x[t];
              int j1 = cot + y[t];
              if(i1 <= 3 && i1 >= 0 && j1 >= 0 && j1 <= 3)
              {
                b[i1][j1] = convert(b[i1][j1]);
              }
          }
      }
    }
  int dem0 = 0, dem1 = 0;
    for(int i=0; i<4; i++)
      for(int j=0; j<4; j++)
         if(b[i][j] == 0)
           dem0++;
          else  
            dem1++;
    if(dem0 == 0 || dem1 == 0)
      return true;
    return false;
}
int ans(int np[])
{
  int dem  = 0;
  for  (int i=1; i<=16; i++)
     if(np[i] == 1)
        dem++;
    return dem;
}
int main()
{
  int a[4][4];
  for(int i=0; i<4; i++)
    for(int j=0; j<4; j++)
    {
      char ch; cin>>ch;
      if(ch == 'b')
         a[i][j] = 0;
      if(ch == 'w')
         a[i][j] = 1;

    }
    int np[20] = {0};

  int minn = INT_MAX;
    while(1)
    {
      int c[4][4];
      for(int i=0; i<4; i++)
        for(int j=0; j<4; j++)
           c[i][j] = a[i][j];

      if(xuli(np, c))
          minn = min(minn, ans(np));
      
      int i = 16;
      while(i > 0 && np[i] == 1 )
      {
        np[i] = 0;
        i--;
      }
      if(i == 0)
        break;
      np[i] = 1;
    }
      
  if(minn == INT_MAX)
    cout<<"-1\n";
  else
     cout<<minn<<endl;
}