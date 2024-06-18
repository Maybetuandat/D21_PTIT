#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int x[]= { 0, 0, 1};
int y[] = { -1, 1, 0};
int convert(int x)
{
    if(x == 0)
      return 1;
    return 0;
}
int full1(int mang1[5][5])
{
    int dem = 0;

    for(int i = 2; i <= 4; i++){
		for(int j = 1; j <= 4; j++)
		{
			if(mang1[i - 1][j] == 0)
			{
				dem++;
				mang1[i - 1][j] = 1;
                mang1[i][j] = convert(mang1[i][j]);
                for(int k =0; k<3; k++)
                {
                    int i1 = i + x[k];
                    int j1 = j + y[k];
                    if(i1 >= 1 && i1 <=4 && j1 >=1 && j1 <=4)
                       mang1[i1][j1] = convert(mang1[i1][j1]);

                }
				
			}
		}
	}
    int dem1 = 0;
    for(int i = 1; i<=4; i++)
      for(int j=1; j<=4; j++)
        if(mang1[i][j] == 1 )
           dem1++;
    if(dem1 == 16)
      return dem;
    return INT_MAX;

}
int full0(int mang2[5][5])
{

    int dem = 0;

    for(int i = 2; i <= 4; i++){
		for(int j = 1; j <= 4; j++)
		{
			if(mang2[i - 1][j] == 1)
			{
				dem++;
				mang2[i - 1][j] = 0;
                mang2[i][j] = convert(mang2[i][j]);
                for(int k =0; k<3; k++)
                {
                    int i1 = i + x[k];
                    int j1 = j + y[k];
                    if(i1 >= 1 && i1 <=4 && j1 >=1 && j1 <=4)
                       mang2[i1][j1] = convert(mang2[i1][j1]);

                }
				
			}
		}
	}
    int dem0 = 0;
    for(int i = 1; i<=4; i++)
      for(int j=1; j<=4; j++)
        if(mang2[i][j] == 0 )
           dem0++;
    if(dem0 == 16)
      return dem;
    return INT_MAX;
}
int timmin(int a, int b, int c, int d)
{
     int  minn = a;
    minn = min(minn, b);
    minn = min(minn, c);
    minn = min(minn, d);
    return minn;
}
int main ()
{
    int a[5][5], d[5][5], b[5][5], c[5][5];
    for(int i=1; i<=4; i++)
       for(int j=1; j<=4; j++)
        {
            char ch; cin>>ch;
            if(ch == 'b')
              a[i][j] = 0;
            else
               a[i][j] = 1;

             b[i][j] = a[i][j];  

        }
    // for(int i=1; i<=4; i++)
    // {

    //     for(int j=1; j<=4; j++)

    //      cout<<a[i][j]<<" ";
    //     cout<<endl;
    // }

    // mac dinh full 1
   	int hang= 0, cot = 0;
	for(int i=4; i>=1; i--)
	{
		hang++;
		cot = 0;
		for(int j=4; j>=1; j--)
		{
			cot++;
			d[hang][cot] = a[i][j];
            c[hang][cot] = a[i][j];
		}
	}
      int minn = timmin(full0(a), full1(b), full0(d), full1(c));
      if(minn == INT_MAX)
        cout<<"-1";
    else 
      cout<<minn;
}
