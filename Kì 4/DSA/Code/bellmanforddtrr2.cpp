#include<bits/stdc++.h>
using namespace std;
int n;
int a[100][100];
int e[100] = {0}, d[100] = {0};
void input()
{
	cin>>n;
	for(int i=1; i<=n; i++)
		for(int j=1; j<=n; j++)
		   cin>>a[i][j];
	
}
int  bellman_ford(int s)
{	
	for(int i=1; i<=n; i++)
	{
		d[i] = a[s][i];
		e[i] = s;
		
	}
	d[s] = 0;
	e[s] = 0;
	int ok = 0;
	for(int k=1; k<=n-1; k++)
	{
		ok = 1;
		for(int i=1; i<=n; i++)
		  for(int j=1; j<=n; j++)
		    if(d[i] > d[j] + a[j][i])
		    {
		    	d[i] = d[j] + a[j][i];
		    	e[i] =  j;
		    	ok = 0;
			}
		if(ok == 1)
		  return 1;
	}
	return 0;
}
int main ()
{
	input();
	int s; cin>>s;
	system("cls");
	if(bellman_ford(s) == 0)
	  cout<<"G chua chu trinh am\n";
	else
	{
		for(int i=1; i<=n; i++)
		{
			if(i != s)
			{
				cout<<"Dinh "<<s <<"->"<<i<<":\n";
				cout<<"Do dai   :"<<d[i]<<endl;
				cout<<"Duong di :";
				int t = i;
				while(t != s)
				{
					cout<<t<<"<-";
					t = e[t];
				}
				cout<<s<<endl;
				cout<<"------------------------------------------------------------------------------------------------------------------\n";
			}
		}
	}
}
