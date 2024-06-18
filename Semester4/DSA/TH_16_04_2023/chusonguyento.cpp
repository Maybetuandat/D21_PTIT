#include<bits/stdc++.h>
using namespace std;
struct data
{
	int demcs, sl;
};
data  cs(long long  n)
{
    
    int dem[10] = {0};
    data k;
    int cou = 0;
    while(n != 0)
    {
    	cou++;
    	dem[n % 10] ++;
    	n = n / 10;
	}
	int res = 0;
    for(int i=0; i<9; i++)
      if(dem[i] != 0)
         res++;
    k.demcs = cou;
    k.sl = res;
    return k;
}
int main ()
{
   
    int  n; cin>>n;
    queue<long long > q;
    q.push(2);
    q.push(3);
    q.push(5);
    q.push(7);
    vector<long long > ans;
    while(!q.empty())
    {
        long long  k = q.front(); q.pop();
        if(cs(k).demcs > n)
          break;
        long long  k2 = k * 10 + 2;
        if(cs(k2).demcs >= 4 && cs(k2).demcs <= n &&  k2 % 2 != 0 && cs(k2).sl == 4)
          ans.push_back(k2);
        q.push(k2);
        long long  k3 = k * 10 + 3;
        if(cs(k3).demcs >= 4 && cs(k3).demcs <= n &&  k3 % 2 != 0 && cs(k3).sl == 4 )
          ans.push_back(k3);
        q.push(k3);
        long long  k5 = k * 10 + 5;
        if(cs(k5).demcs >= 4 && cs(k5).demcs <= n &&  k5 % 2 != 0 && cs(k5).sl == 4)
          ans.push_back(k5);
          q.push(k5);
        long long  k7 = k * 10 + 7;
        if(cs(k7).demcs >= 4 && cs(k7).demcs <= n &&  k7 % 2 != 0 && cs(k7).sl == 4)
          ans.push_back(k7);
        q.push(k7);
    }
    sort(ans.begin(), ans.end());
    for(long long  it : ans)
      cout<<it<<endl;
    return 0;
}
