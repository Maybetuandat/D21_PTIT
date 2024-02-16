#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;
long long kq[15][15], a[15][15], n;
void nhan(long long a[15][15], long long b[15][15])
{
    long long tmp[15][15];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++) tmp[i][j] = 0;
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            for(int k = 0; k < n; k++)
            {
                tmp[i][j] += (a[i][k] * b[k][j]) % mod;
                tmp[i][j] %= mod;
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            kq[i][j] = tmp[i][j];
        }
    }
}
void Pow(long long f[15][15], long long n)
{
    if(n <= 1)
    {
        return;
    }
    Pow(f, n / 2);
    nhan(f, f);
    if(n % 2 == 1)
    {
        nhan(f, a);
    }
}
void solve(long long k)
{
    Pow(kq, k);
    for(int i = 0; i < n; i++)
    {
        for(int j= 0; j < n; j++)
        {
            cout << kq[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
	ios_base::sync_with_stdio(0);  cin.tie(0); cout.tie(0);
    long long test;
    cin >> test;
    while(test--)
    {
        cin >> n;
        long long k;
        cin >> k;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                kq[i][j] = a[i][j];
            }
        }
        solve(k);
    }
    return 0;
}