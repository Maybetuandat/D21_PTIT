#include<bits/stdc++.h>
using namespace std;
class SinhVien
{
    private:
        string masv, name, email;
    public:
        string classes;
        friend istream &operator >>( istream &is, SinhVien &a)
        {
            is>>a.masv;
            is.ignore();
            getline(is,a.name);
            is>>a.classes;
            is>>a.email;
            return is;
        }
        friend ostream &operator <<(ostream &os, SinhVien a)
        {
            os<<a.masv<<" "<<a.name<<" "<<a.classes<<" "<<a.email<<endl;
            return os;
        }

};
void ct()
{
    int n,i;
    SinhVien ds[1009];
    cin>>n;
    for( i=1; i<=n; i++)
    {
        cin>>ds[i];
    }
    int Q;
    cin>>Q;
    string findclass="";
    while(Q--)
    {
        cin>>findclass;
        cout<<"DANH SACH SINH VIEN KHOA "<<findclass<<":\n";
            for( i=1; i<=n; i++)
                {
                    if( findclass[3] == ds[i].classes[2] && findclass[2]==ds[i].classes[1] )
                     {       
                        cout<<ds[i];
                     }
                 }
        
    }
}
int main ()
{
    ct();
}