#include<bits/stdc++.h>
using namespace std;
int hang[20], xuoi[20], nguoc[20], a[20][20];
long long  maxx= INT_MIN;
long long sum ;
void dq(int i)
{
	for(int j=1; j<=8; j++)
	{
		if(!hang[j]  && !xuoi[i-j + 8]  && !nguoc[i + j - 1])
		{
			hang[j] = xuoi[i-j+8] = nguoc[i + j - 1] =  1;
			sum += a[i][j];
			if(i == 8)
			{
				if(sum > maxx)
				  maxx = sum;
			}
			else
			  dq(i+1);
			hang[j] = xuoi[i-j + 8] = nguoc[i + j - 1]= 0;
			sum -= a[i][j];
			
		}
	}
}
void ct()
{
	for(int i=1; i<=8; i++)
	{
		for(int j=1; j<=8; j++)
		  cin>>a[i][j];
	}
	memset(hang, sizeof(hang), 0);
	memset(xuoi, sizeof(xuoi), 0);
	memset(nguoc, sizeof(nguoc), 0);
	sum = 0;
	maxx=0;
	dq(1);
	cout<<maxx<<endl;
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
