#include<bits/stdc++.h>
using namespace std;
int a[109][109];
int n,m;
bool visited[109][109];
int dx[8]={-1,-1,-1,0,0,1,1,1};
int dy[8]={-1,0,1,-1,1,-1,0,1};
void dfs(int i, int j)
{
	visited[i][j]=true;
	 for(int k=0; k<=7; k++)
	 {
	 	int i1 = i + dx[k];
	 	int j1 = j + dy[k];
	 	if( i1 >=0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] == 1 && !visited[i1][j1] )
	 	{
	 		dfs(i1,j1);
		}
	 }
}
void input()
{
	cin>>n>>m;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		  cin>>a[i][j];
	}
	memset(visited, false, sizeof(visited));
}
void ct()
{
	int t;
	cin>>t;
	while(t--)
	{
	
		input();
		int count=0;
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<m; j++)
		    {
				if( a[i][j] == 1 && !visited[i][j] )
			 	{
				  dfs(i,j);
				  count++;
			    }
		    }
	    }
     	cout<<count<<endl;
    }
}
int main ()
{
	ct();
} 
