#include<bits/stdc++.h>
using namespace std;
int k, n, m;
vector<string> dic;
vector<string> res;
char a[10][10];
int mx[10] = {0, 0, -1 , -1, -1, 1, 1, 1};
int my[10] = {-1, 1, 0, 1, -1, 0, 1, -1};
int vs[10][10];
void Try(int i, int j, string s)
{
    for(int t = 0; t < k; t++)
    {
        if(dic[t] == s) res.push_back(s);
    }
    for(int t = 0; t < 8; t++)
    {
        int x = i + mx[t];
        int y = j + my[t];
        if(x > 0 && x <= n && y > 0 && y <= m && vs[x][y] == 0)
        {
            vs[x][y] = 1;
            Try(x, y, s + a[x][y]);
            vs[x][y] = 0;
        }
    }
}
int main()
{
    int t; cin >> t;
    while(t--)
    {
        cin >> k >> n >> m;
        scanf(" ");
        for(int i = 1; i <= k; i++)
        {
            string s;
            scanf(" ");
            cin >> s;
            dic.push_back(s);
        }
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                cin >> a[i][j];
            }
        }
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                for(int t = 0; t <= n; t++)
                    for(int s = 0; s <= m; s++) vs[t][s] = 0;
                vs[i][j] = 1;
                string tmp = "";
                Try(i, j, tmp + a[i][j]);
            }
        }
        if(res.size() == 0) cout << "-1";
        else{
            for(auto x: res) cout << x << " ";
        }
        cout << endl;
        res.clear();
        dic.clear();
    }
    return 0;
}
