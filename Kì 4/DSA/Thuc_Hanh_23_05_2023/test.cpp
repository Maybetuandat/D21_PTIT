#include<bits/stdc++.h>

using namespace std;


int main()
{
	int n, k;
	cin >> n >> k;
	vector<int> v;
	vector<int> tmp;
	for (int i = 0; i < n; i++)
	{
		int z;
		cin >> z;
		v.push_back(z);
	}
		sort(v.begin(), v.end(), greater<int>());
		for (auto x : v)
			cout << x << " ";
//	int ans = 0;
//	while (v.size() != 1)
//	{
//	
//		tmp.clear();
//		sort(v.begin(), v.end(), greater<int>());
//		for (auto x : v)
//			cout << x << " ";
//		if (v.size() >= k)
//		{
//			int sum = 0;
//			int min = 1e5, max = -1e6;
//			while (k--)
//			{
//				int x = v.back();
//				//cout << x << " ";
//				if (x < min)
//					min = x;
//				if (x > max)
//					max = x;
//				sum += x;
//				v.pop_back();
//			}
//			ans += max - min;
//			v.push_back(sum);
//		}
////		else
////		{
////			int min = 1e5, max = -1e6;
////			while (v.size()--)
////			{
////				int x = v[v.size() - 1];
////				tmp.push_back(x);
////				if (x < min)
////					min = x;
////				if (x > max)
////					max = x;
////				sum += x;
////				v.pop_back();
////			}
////			ans += max - min;
////			v.push_back(sum);
//		// }
//	}
//	cout << v[0] << endl << ans << endl;
}
