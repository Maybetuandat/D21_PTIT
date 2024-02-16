#include<bits/stdc++.h>
using namespace std;
void ct()
{
	string s1, s2; cin>>s1>>s2;
	int n = s1.length(), m = s2.length();
	int f[n+1][m+1] = {0};
	// thuat toan: 
	
// co so cua quy hoach dong
	
	// dp[i][j]: so cach can su dung de bien doi xau s1 den ki tu thu i thanh xau s2 den ki tu thu j
	// dp[i][0]: can xoa di i ki tu de tu xau s1 thanh xau s2 -> dp[i][0] = i;
	// dp[0][j]: can them j ki tu de tu xau si thanh xau s2 -> dp[0][j] = j;
//thuat toan: 
  //neu ki tu thu i cua s1 bang ki tu thu j cua s2 -> khong can phep bien doi -> f[i][j] = f[i-1][j-1]
  // neu ki tu s1[i] != s2[j] ->  co 3 th xay ra
  //th1: them ca hai xau 1 ki tu -> f[i-1][j-1]
  //th2: them 1 ki tu vao xau s1 -> f[i-1][j]
  //th3: xoa 1 ki tu trong xau s2 -> f[i][j-1] 
  //can tim min trong 3 th vua roi -> ket qua cua bai toan se la f[n][m]
	
	for(int i=0; i<=n; i++)
	{
		for(int j=0; j<=m; j++)
		{
			if(i == 0 || j ==  0)
			  f[i][j] = i + j;
			else if(s1[i-1]  == s2[j-1])
			       f[i][j] = f[i-1][j-1];
			     else
			     {
			     	f[i][j]  = min({f[i-1][j-1], f[i-1][j], f[i][j-1]}) + 1;
				 }
		}
	}
	cout<<f[n][m]<<endl;
}
int  main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
