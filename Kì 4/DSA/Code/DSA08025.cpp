#include<bits/stdc++.h>
using namespace std;
int banco[9][9];
struct data
{
	int i, j, cou;
	data(int i, int j, int cou)
	{
		this->i = i;
		this->j = j;
		this->cou = cou;
	}
};
void ct()
{
	string s1,s2; cin>>s1>>s2;
	int i1 = s1[0] - 'a' + 1;
	int j1 = s1[1] - '0' ;
	int u = s2[0] - 'a' + 1;
	int v = s2[1] - '0' ;
	queue<data> q;
	q.push(data(i1, j1, 0));
	bool vs[10][10];
	memset(vs, false, sizeof(vs));
	while(!q.empty())
	{
		data x = q.front(); q.pop();
		if(x.i == u && x.j == v)
		{
			cout<<x.cou<<endl;
			return;
		}
		int i = x.i, j = x.j;
		if(i - 1>= 1 && i-1 <= 8 && j-2 >= 1 && j - 2 <= 8  && !vs[i-1][j-2])
		{
			q.push(data(i-1, j-2, x.cou + 1));
			vs[i-1][j-2] = true; 	
		}  
		if(i - 1>= 1 && i-1 <= 8 && j+2 >= 1 && j + 2 <= 8  && !vs[i-1][j+2])
		{
			q.push(data(i-1, j+2, x.cou + 1));
			vs[i-1][j+2] = true; 	
		}  
		if(i - 2>= 1 && i-2 <= 8 && j-1 >= 1 && j - 1 <= 8  && !vs[i-2][j-1])
		{
			q.push(data(i-2, j-1, x.cou + 1));
			vs[i-2][j-1] = true; 	
		}  
		if(i - 2>= 1 && i-2 <= 8 && j+1 >= 1 && j + 1 <= 8  && !vs[i-2][j+1])
		{
			q.push(data(i-2, j+1, x.cou + 1));
			vs[i-2][j+1] = true; 	
		}  
		if(i + 1>= 1 && i+1 <= 8 && j-2 >= 1 && j - 2 <= 8  && !vs[i+1][j-2])
		{
			q.push(data(i+1, j-2, x.cou + 1));
			vs[i+1][j-2] = true; 	
		}  
			if(i + 1>= 1 && i+1 <= 8 && j+2 >= 1 && j + 2 <= 8  && !vs[i+1][j+2])
		{
			q.push(data(i+1, j+2, x.cou + 1));
			vs[i+1][j+2] = true; 	
		}  
			if(i + 2>= 1 && i+2 <= 8 && j-1 >= 1 && j - 1 <= 8  && !vs[i+2][j-1])
		{
			q.push(data(i+2, j-1, x.cou + 1));
			vs[i+2][j-1] = true; 	
		}  
			if(i + 2>= 1 && i+2 <= 8 && j+1 >= 1 && j + 1 <= 8  && !vs[i+2][j+1])
		{
			q.push(data(i+2, j+1, x.cou + 1));
			vs[i+2][j+1] = true; 	
		}  
	}
	

}
int main ()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
