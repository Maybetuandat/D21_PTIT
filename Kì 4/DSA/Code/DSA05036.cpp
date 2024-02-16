#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void ct()
{
    int n; cin>>n;

    double  a[n], b[n];
    
    for(int i=0; i<n; i++)
        cin>>a[i]>>b[i];
	int l[n] = {0}, r[n] = {0};
	
    for(int i=0; i<n; i++)
    {
        l[i] = 1;
        r[i] = 1;
        for(int j=0; j<i; j++)
           if(a[j] < a[i] && b[j] > b[i])
           {
           		 l[i] = max(l[i],l[j] + 1);
           		 r[i] = max(r[i],r[j] + 1);
		   }
            
    }
    int maxx = 0;
    for(int i=0; i<n; i++)
    {
        if(l[i] == r[i])
          maxx = max(maxx, r[i]);
    }
    cout<<maxx<<endl;
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