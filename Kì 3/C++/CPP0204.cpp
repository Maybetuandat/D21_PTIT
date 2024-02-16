#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

long long max(long long a, long long b)
{
	if(a > b)
		return a;
	return b;
}

void sang(int L, int R)
{
    int n = R - L + 1;
    int a[n];
    for(int i =0; i< n ; i++)
    	a[i] = 1;

    for (long long i = 2; i <= sqrt(R); i++)
        for (long long j = max(i * i, (L + i - 1) / i * i); j <= R; j += i)
            a[j - L] = 0;

    if (L == 1)
        a[0] = 0;
    
    int dem = 0;
    for(int i = L; i<=R; i++)
    	if(a[i - L] == 1)
    		dem ++;
    cout << dem << endl;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		
		ll l, r;
		cin >> l >> r;
		sang (l, r);
		
	}
}

