//https://code.ptit.edu.vn/student/question/CPP0429
// Bài toán sửa đèn
#include<bits/stdc++.h>
using namespace std;
void ct()
{
    int n,k,b,i;
    cin>>n >>k >>b;
    int a[n+3]={0};
    for(i=0; i<b; i++)
    {
        int x; cin>>x;
        a[x]=1;
    }
    int demsodenchuahong=0;
    for(i=1; i<=k; i++)
    {
        if(a[i] == 0) demsodenchuahong++;
    }
    int ans=demsodenchuahong;
    for(i=2; i<=n-k+1; i++)
    {
        if(a[i-1] == 0)
           demsodenchuahong--;
        if(a[i+k-1] == 0)
          demsodenchuahong++;
        ans = max(ans,demsodenchuahong);
    }
    cout<< k - ans <<endl;
}
int main ()
{
    ct();
}