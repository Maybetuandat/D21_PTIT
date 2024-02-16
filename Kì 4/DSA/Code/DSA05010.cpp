#include<bits/stdc++.h>
using namespace std;
void ct()
{
	//thuat toan: tinh toan cac so du khi chia du cho k, quy hoach dong
	// theo so du chia cho k, tim het tat ca
	//ket qua se la dp[n][0]
	//khi chia du thi can luu y xet den ket qua la j - a; vi ket qua la chia du nen 
	// co the kqua tren se am, ta can cong them k vao thanh j + k - a roi sau do % k
		int n,k; cin>>n>>k;
	int a, dp[n+5][k];
	dp[0][0] = 0;// hieu bang 0 -> mac dinh la 0 co so nao tuong tu nhu bai tong bang s ma f[0][0] = 0;
	for(int i=1; i<k; i++)
	   dp[0][i] = -1005; // hieu khac 0 khi chua chon so nao -> cho gia tri be nhat
	for(int i=1; i<=n; i++)
	{
		int a ; cin>>a;
		a %= k;
		for(int j=0; j<k; j++)
		   dp[i][j] = max(dp[i-1][j], dp[i-1][(j + k - a) % k] + 1);
	}
	cout<<dp[n][0]<<endl;
}
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
