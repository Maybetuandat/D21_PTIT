//https://code.ptit.edu.vn/student/question/CPP0629
//DANH SÁCH DOANH NGHIỆP NHẬN SINH VIÊN THỰC TẬP - 2


#include<bits/stdc++.h>
using namespace std;
class DoanhNghiep
{
    private:
        string name,code;
        int index;
    public:
        friend istream &operator >>(istream &is, DoanhNghiep &a)
        {
            is.ignore();
            getline(is,a.code);
            getline(is,a.name);
            is>>a.index;
            return is;
        }
        friend ostream &operator <<(ostream &os, DoanhNghiep a)
        {
            os<<a.code<<" "<<a.name<<" "<<a.index<<endl;
            return os;
        }
        string getcode()
        {
            return code;
        }
        int getsl()
        {
            return index;
        }
};
bool cmp(DoanhNghiep a, DoanhNghiep b)
{
    if(a.getsl() > b.getsl())
       return true;
    if(a.getsl() == b.getsl())
    {
        if(a.getcode() < b.getcode())
            return true;
        else
           return false;
    }
    return false;
}
void ct()
{
    int n,i; cin>>n;
    DoanhNghiep ds[n+1];
    for(i=0; i<n; i++)
      cin>>ds[i];
    int t; cin>>t;
    while(t--)
    {
        int a,b; cin>>a>>b;
        cout<<"DANH SACH DOANH NGHIEP NHAN TU "<<a<<" DEN "<<b<<" SINH VIEN:\n";
        vector<DoanhNghiep> ans;
        for(DoanhNghiep x: ds)
            if(x.getsl() >=a && x.getsl() <=b)
                 ans.push_back(x);
        sort(ans.begin(), ans.end(), cmp);
        for(DoanhNghiep x: ans)
           cout<<x;
    }
}
int main ()
{
    ct();
}