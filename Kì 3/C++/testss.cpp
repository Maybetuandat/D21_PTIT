#include<bits/stdc++.h>
using namespace std;
class NhanVien
{
    private:
        string date;
        static int dem;
    public:
    friend istream &operator >>(istream &is, NhanVien &a)
    {
        is>>a.date;
        return is;
    }
    string getyears()
    {
        string year =  date.substr(date.length() - 4 ,4);
        return year;
    }
    string getmonths()
    {
        string months =  date.substr(date.length() - 7 ,2);
        return months;
    }
    string getdays()
    {
        string days =  date.substr(0 ,2);
        return days;
    }
    friend ostream &operator <<(ostream &os, NhanVien a)
    {
        cout<<a.date<<endl;
        return os;
    }
};
int NhanVien::dem=0;
bool cmp(NhanVien a, NhanVien b)
{
    if(a.getyears() < b.getyears())
      return true;
    if(a.getyears() > b.getyears())
       return false;
    if(a.getmonths() < b.getmonths())
       return true;
    if(a.getmonths() > b.getmonths())
       return false;
    if(a.getdays() < b.getdays())
       return true;
    if(a.getdays() > b.getdays())
       return false;
    return true;
}
void sapxep(NhanVien ds[], int n)
{
    sort(ds, ds+n , cmp);
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}