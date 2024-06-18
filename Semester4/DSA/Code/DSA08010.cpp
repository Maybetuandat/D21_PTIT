#include<bits/stdc++.h>
using namespace std;
typedef struct num
{
    int val;
    int cnt;
} so;
int nt(int n)
{
    if(n <= 1) return 0;
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0) return 0;
    }
    return 1;
}
int solve(int n)
{
    if(n == 1) return 0;
    if(n == 2) return 1;
    queue<so> q;
    q.push({n, 0});
    set<int> se;
    while(!q.empty())
    {
        so a = q.front();
        q.pop();
        if(a.val == 1)
        {
            return a.cnt;
        }
        else if(a.val - 1 == 1)
        {
            return a.cnt + 1;
        }
        for(int i = 2; i <= sqrt(a.val); i++)
        {
            if(a.val % i == 0)
            {
                int m = max(i, a.val/i);
                if(se.find(m) == se.end())
                {
                    q.push({m, a.cnt + 1});
                    se.insert(m);
                }
            }
        }
        if(se.find(a.val - 1) == se.end())
        {
            q.push({a.val - 1, a.cnt + 1});
            se.insert(a.val - 1);
        }
    }
    return -1;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}
