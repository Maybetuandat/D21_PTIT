#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
	if(a == 0) return b;
	return gcd(b%a, a);
}
void ct()
{
		int n, k;
	cin >> n >> k;
	vector<int> a(n);
	bool ok = true;
	for(int i=0; i<n; i++) {
		cin >> a[i];
		if(a[i] == k)
		 {
		 	ok = false;
		 }
	}
	if(ok == false) {
		cout << 1 << endl;
		return;
	}
	int l = 1;
	int r = n;
	int ans = n + 1;
	while(l <= r) {
		int mid = (l+r)/2;
		bool found = false;
		for(int i=0; i+mid<=n; i++) {
			int g = a[i];
			for(int j = i+1; j<i+mid; j++) {
				g = gcd(g, a[j]);
			}
			if(g == k) {
				found = true;
				break;
			}
		}
		if(found) {
			ans = mid;
			r = mid - 1;
		}
		else l = mid + 1;
	}
	
	if(ans == n+1) {
		cout << -1 << endl;
	}
	else cout << ans << endl;
}
int main ()
{
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
