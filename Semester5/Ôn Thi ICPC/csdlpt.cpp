#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cout<<"chu thich: "<<endl;
	cout<<"n : so luong truy van \n";
	cout<<"m : so luong thuoc tinh \n";
	cout<<"k : so luong site \n";
     int n , m , k;   cin>>n>>m>>k;
    // ma tran use
    int use[n + 1] [m+1] = {0};
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cin>>use[i][j];
        }
    }
    int hang[n + 1] = {0};
    for(int i=1; i<=n; i++)
    {
        for(int j = 1; j <= k ; j++)
        {
             int x;  cin>>x;
            hang[i] += x;
        }
          
    }
    // acc chi can tinh tong cac hang
    for(int i=1; i<=m; i++)
    {
        for(int j = 1; j<=m; j++)
        {
            int sum = 0;
            if(i == j)
            {
                for(int t = 1; t <= n; t++)
                {
                    sum += use[t][i] * hang[t];
                }
            
            }
            else
           {
                // i, j, k  da dung
                for(int t =1; t <= n; t++)
                {
                    if(use[t] [i] == 1 && use[t][j] == 1)
                    {
                        sum += hang[t];
                    }
                }
            }
            cout<<sum<<" ";
        }
        cout<<endl;
    }





   

}
