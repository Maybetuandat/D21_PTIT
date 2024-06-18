#include<bits/stdc++.h>
using namespace std;
int n;
int x[20];
int c[20][20];
int cmin = INT_MAX;
int fopt = INT_MAX;
int xopt[20];
bool unused[21];
void input()
{
	for(int i=1; i<= 19; i++)
	{
		unused[i] = true;
	}
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			cin>>c[i][j];
			if(c[i][j] < cmin && i != j)
			  cmin = c[i][j];
		}
		  
	}
}
int sum;
void trial(int i)
{
	for(int j=2; j<=n; j++)
	{
		if(unused[j])
		{
			x[i] = j;
			sum += c[x[i-1]][x[i]];
			unused[j] = false;
			int v;
			if( i == n)
			{
				v = sum + c[x[n]][x[1]];
			
				if( fopt > v)
				{
					fopt = v;
					for(int k=1; k<=n; k++)
					   xopt[k] = x[k];
				}	
		   }
			else if(sum + (n-i+1) * cmin < fopt)  trial(i+1);
		sum -= c[x[i-1]][x[i]];
		unused[j]= true;
	    }
	}
}
void in()
{
	cout<<"(";
	for(int i=1; i<=n; i++)
	  cout<<xopt[i]<<",";
	  cout<<"1";
	  cout<<")"<<endl;
	  cout<<fopt<<endl;
}
int main ()
{
	sum  = 0;
	input();
	x[1] = 1;
	trial(2);
	in();
}
