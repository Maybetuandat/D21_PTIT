#include<bits/stdc++.h>
using namespace std;

int n, k;
int a[16];
int e[16];
vector<string> res;
void ct(int i){
	for (int j = 0; j <= 1; j++) 
	{
		e[i] = j;
		
		if (i == n - 1) 
		{
			int dem = 0;
			for (int m = 0; m < n; m++) if (e[m] == 1) dem++;
			if (dem == k) {
				string s = "";
				for (int m = 0; m < n; m++) {
					if (e[m] == 1) {
						s += to_string(a[m]) + " ";
					} 		
				}
				res.push_back(s);	
			}
		}
		else ct(i + 1);
	}
	
}

int main()
{
	int t; cin >> t;
	while(t--) 
	{
		cin >> n >> k;	
		res.clear();
		for (int i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a + n);
		ct(0);
		sort(res.begin(), res.end());
		for (auto x : res)
			cout << x << endl;

	}
}
