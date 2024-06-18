#include<bits/stdc++.h>
using namespace std;
void tinhAA()
{
	cout<<"chu thich: "<<endl;
	cout<<"n : so luong truy van \n";
	cout<<"m : so luong thuoc tinh \n";
	cout<<"k : so luong site \n";
	cout<<"hay nhap lan luot n, m , k , sau do nhap ma tran use va ma tran acc \n";
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
void tinhbond()
{
			cout<<"ban can nhap so luong thuoc tinh va ma tran aa \n";
			int m; cin>>m;
			int aa[m + 1][m + 1];
			for(int i=1; i<=m; i++)
			{
				for(int j=1; j<=m; j++)
				  cin>>aa[i][j];
			}
			bool kt = true;
			while(kt)
			{
				int bond = 0;
				cout<<"ban can  nhap i , j  de tinh 2 * bond(ai, aj)\n";
				try {
					int x; cin >>x;
					int y ; cin>>y;
				for(int i=1; i<= m ; i++)
				   bond += aa[i][x] * aa[i][y];
				bond *= 2;
				cout<<bond<<endl;
				}
				catch (const char* message)
				{
					kt = false;
					break;
				}
				
				
			}
}
int main()
{
	cout<<"nhap 1 de tinh ma tran AA\n";
	cout<<"nhap 2 de tinh bond \n";
	int c; cin>>c;
	system("cls");
	if(c == 1)
	{
		tinhAA();
	}
	else
	{
		tinhbond();
	}
	
}

