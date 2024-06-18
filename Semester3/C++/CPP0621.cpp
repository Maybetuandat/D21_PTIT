#include<bits/stdc++.h>
using namespace std;
class SinhVien
{
    private:
    string masv,name,   classes,email;

    public:
        SinhVien();
        ~SinhVien();
        friend istream &operator >>(istream &is, SinhVien  &a)
        {
            scanf("\n");
            getline(is,a.masv);
            getline(is, a.name);
            getline(is,a.classes);
            getline(is,a.email);
            return is;
        }
        friend ostream &operator <<(ostream &os, SinhVien a)
        {
            os<<a.masv<<" "<<a.name<<" "<<a.classes<<" "<<a.email<<endl;
            return os;
        }
        string getmsv()
        {
            return masv;
        }

};
SinhVien::SinhVien()
{
    masv=name=classes=email="";
}
SinhVien::~SinhVien()
{

}
bool cmp(SinhVien a, SinhVien b)
{
    return a.getmsv() <b.getmsv();
}
int main ()
{
    int i,dem=0;
    SinhVien ds[10000],x;
    while(cin>>x)
    {
        dem++;
        ds[dem]=x;
    }
    sort(ds,ds+dem, cmp);
    for(i=0; i<dem; i++)
    {
        cout<<ds[i];
    }
}