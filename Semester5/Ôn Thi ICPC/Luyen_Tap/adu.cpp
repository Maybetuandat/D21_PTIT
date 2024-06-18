#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int demcs(ll a)
{
    int dem  = 0;

    while(a != 0 && a % 10  == 0)
    {
        a = a / 10;
        dem++;
    }
    return dem;
}
int demcs2(ll a)
{
    int dem = 0;
    if(a % 10 == 0)
      return dem;
     while(a != 0 && a % 5  == 0)
    {
        a = a / 5;
        dem++;
    }
    return dem;
}
int demcs3(ll a)
{
    int dem = 0;
     if(a % 10 == 0)
      return dem;
     while(a != 0 && a % 2  == 0)
    {
        a = a / 2;
        dem++;
    }
    return dem;
}
bool cmp(ll a, ll b)
{
   return demcs(a) > demcs(b);
}
bool cmp1(ll a, ll b)
{
   return demcs2(a) > demcs2(b);
}
bool cmp2(ll a, ll b)
{
   return demcs3(a) > demcs3(b);
}
int main ()
{
        int n,k; cin>>n>>k;
        ll a[n];
        for(ll &x : a)
          cin>>x;

    
        sort(a, a + n, cmp2);
        sort(a, a + n, cmp1);
        sort(a, a + n, cmp);
    
        for(int x : a)
           cout<<x<<endl;
        int dem2 = 0;
        int dem5 = 0;
        int maxx = 0;
        for(int i = 0; i <= n - k; i++ )
        {
            dem2 = 0;
            dem5 = 0;
            int dem10 = 0;
            for(int j = 0; j<k; j++)
            {
                ll t = a[i+j];
                while(t > 0 && t % 10 == 0 )
                {
                    dem10++;
                    t =t /  10;
                }
                while(t > 0 && t % 2 == 0  )
                {
                    dem2++;
                    t =t /  2;

                }
                while( t > 0 && t % 5 == 0)
                {
                    dem5++;
                    t =t /  5;
                }

            }
            int adu = dem10 + min(dem2, dem5);
            maxx = max(maxx, adu);
        }
        cout<<maxx;
}