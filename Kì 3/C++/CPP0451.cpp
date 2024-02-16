//https://code.ptit.edu.vn/student/question/CPP0451
//PHẦN TỬ GẦN NHẤT

#include<bits/stdc++.h>
using namespace std;
void ct()
{
    int t,i; cin>>t;
    while(t--)
    {
        
        int n; cin>>n;
        vector<int> ans(n);
        for(i=0; i<n; i++)
           cin>>ans[i];
        int k,x;
        cin>>k>>x;
        int vt1= lower_bound(ans.begin(), ans.end(), x) - ans.begin(), vt2=vt1;
        for(i=k/2; i>=1; i--)
           cout<<ans[vt2-i]<<" ";
        while(ans[vt1] == x)
            vt1++;
        for(i=0; i < (k/2);  i++)
           cout<<ans[vt1+i]<<" ";
        cout<<endl;
    }
}
int main ()
{
    ct();
}