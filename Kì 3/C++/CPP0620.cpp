#include<bits/stdc++.h>
using namespace std;
class SinhVien
{
    private:
    string masv,name,   classes,email;

    public:
        SinhVien();
        ~SinhVien();
        void nhap();
        void inmh();
        string getclasses()
        {
            return classes;
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
void SinhVien::nhap()
{
    cin>>masv;
    cin.ignore();
    getline(cin,name);
    cin>>classes;
    cin>>email;
}
void SinhVien::inmh()
{
        cout<<masv<<" "<<name<<" "<<classes<<" "<<email<<endl;   
}
bool cmp(SinhVien a, SinhVien b)
{
    if(a.getclasses() < b.getclasses())
       return 1;
    if(a.getclasses() == b.getclasses() )
    {
        if(a.getmsv() < b.getmsv())
            return 1;
    }
    return 0;
}
int main ()
{
    int n,i;
    cin>>n;
    SinhVien ds[10000];
    for(i=0; i<n; i++)
    {
        ds[i].nhap();
    }
    sort(ds,ds+n, cmp);
    for(i=0; i<n; i++)
    {
        ds[i].inmh();
    }
}