#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n+1][n+1];
		int pre[n+1][n+1];
		
		for(int i = 0; i< n; i++)
			for(int j = 0; j< n; j++)
				cin >> a[i][j];
		
		for(int i = 1; i<= n; i++){
			for(int j = 1; j<= n; j++){
				pre[i][j] = a[i-1][j-1] + pre[i-1][j] + pre[i][j-1] + pre[i-1][j-1];
			}
		}
		
		int check = 1;
		for(int i = 0; i< n; i++){
			for(int j = 0; j< n; j++){
				for(int k = 2; k<= n; k++){
					if(i + k <= n && j + k <= n){
						int sum = pre[i + k][j + k] - pre[i][j + k] - pre[i + k][j] + pre[i][j];
//						cout << sum << endl;
						if(sum % 2 == 0){
						check = 0;
						break;
						}
					}
				
				}
			}
		}
		
		if(check == 1){
			cout << "YES" << endl;
			
		}
		else{
			cout << "NO" << endl;
		}
	}
}