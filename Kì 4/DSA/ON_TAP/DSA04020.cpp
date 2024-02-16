#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int find(int a[], int i, int j, int k)
{
    int dau = i;
    int cuoi = j;
    while(dau <= cuoi)
    {
        int mid = (dau + cuoi) / 2;
        if(a[mid] == k)
            return mid + 1;
        else if(a[mid] > k)
               cuoi = mid - 1;
             else
                dau = mid + 1;
    }
    return j + 1;
}
void ct()
{
    int n,k; cin>>n>>k;
    int a[n];
    for(int &x : a)
      cin>>x;
    if(find(a, 0, n-1, k) == n)
       cout<<"NO\n";
    else
       cout<<find(a, 0, n-1, k)<<endl;
}
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        ct();
    }
    return 0;
}