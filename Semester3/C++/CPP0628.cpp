//https://code.ptit.edu.vn/student/question/CPP0628
//DANH SÁCH DOANH NGHIỆP NHẬN SINH VIÊN THỰC TẬP - 1


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
    sort(ds,ds+n,cmp);
    for(i=0; i<n; i++)
      cout<<ds[i];
}
int main ()
{
    ct();
}