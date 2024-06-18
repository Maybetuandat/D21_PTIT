#include<bits/stdc++.h>
using namespace std;
void ct()
{
    int t,i,j,n;
    int row[100000],col[100000],a[109][109];
    cin>>t;
    while(t--)
    {
        cin>>n;
        int kt;
        int max=INT_MIN;
        for(i=0; i<n; i++)
        {
            row[i]=0;
            for(j=0; j<n; j++)
            {
             cin>>a[i][j];
             row[i]+=a[i][j];
            }
            if(row[i] > max)
            {
                max=row[i];
                kt=1;
            }
        }
        for(j=0; j<n; j++)
        {
            col[j]=0;
            for(i=0; i<n; i++)
                col[j]+=a[i][j];
            if(col[j] > max)
            {
                max=col[j];
                kt=0;
            }
        }
        int ans=0;
        if(kt == 0)
        {
            for(i=0; i<n; i++)
                ans=ans+max-row[i];
            cout<<ans<<endl;
        }
        else
        {
            for(i=0; i<n; i++)
                ans=ans+max-col[i];
            cout<<ans<<endl;
        }
    }
}
int main ()
{
    ct();
}