//https://code.ptit.edu.vn/student/question/CPP0527
//SẮP XẾP THỜI GIAN

#include<bits/stdc++.h>
using namespace std;
struct Time
{
    int hour, minute, second;
};
void nhap(Time &a)
{
    cin>>a.hour>>a.minute>>a.second;
}
bool cmp(Time a, Time b)
{
    if(a.hour < b.hour)
      return true;
    if(a.hour == b.hour)
    {
        if(a.minute < b.minute)
          return true;
        if(a.minute > b.minute)
          return false;
        if(a.minute == b.minute)
        {
            if(a.second < b.second)
               return true;
            else
               return false;
        }
    }
    return false;
}
void in(Time a)
{
        cout<<a.hour<<" "<<a.minute<<" "<<a.second<<endl;
}
void ct()
{
    int n,i;  cin>>n;
    Time ds[n+1];
    for(i=0; i<n; i++)
        nhap(ds[i]);
    sort(ds,ds+n, cmp);
    for(i=0; i<n; i++)
        in(ds[i]);
}
int main ()
{
    ct();
}