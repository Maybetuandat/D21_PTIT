//https://code.ptit.edu.vn/student/question/CPP0624

//LIỆT KÊ SINH VIÊN THEO NGÀNH

#include<bits/stdc++.h>
using namespace std;
class SinhVien
{
    private:
        string  name,email;

    public:
        string masv,classes;
        friend istream &operator >>(istream &is, SinhVien &a);
        friend ostream &operator <<(ostream &os, SinhVien a);

};
istream &operator >>(istream &is, SinhVien &a)
{
    scanf("\n");
    getline(cin,a.masv);
    getline(cin,a.name);
    getline(cin,a.classes);
    getline(cin,a.email);
    return is;
}
ostream &operator <<(ostream &os, SinhVien a)
{
   cout<<a.masv<<" "<<a.name<<" "<<a.classes<<" "<<a.email<<"\n";
    return os;
}
void xuli(string s, SinhVien ds[1000], int n)
{
    int i;
    for(i=0; i<n; i++)
        {
            if(s=="CN" || s=="AT")
            {
               if(ds[i].masv[5] == s[0] && ds[i].masv[6] == s[1] && ds[i].classes[0] !='E')
                  cout<<ds[i];
            }   
            else
            {
                if(ds[i].masv[5] == s[0] && ds[i].masv[6] == s[1])
                      cout<<ds[i];
            }
        }
}
void ct()
{
    int t,i; cin>>t;
    SinhVien ds[t+2];
    for( i=0; i<t; i++)
       cin>>ds[i];
    int q; cin>>q;
    cin.ignore();
    string adu="";
    while(q--)
    {
        getline(cin,adu);
        string cmp=adu;
        transform(cmp.begin(), cmp.end(), cmp.begin(), ::toupper);
        cout<<"DANH SACH SINH VIEN NGANH ";
        cout<<cmp<<":\n";
        if(adu=="Ke toan")
        {
            cmp="KT";
        }
        if(adu=="Cong nghe thong tin")
        {
            cmp="CN";
        }
        if(adu=="An toan thong tin")
        {
            cmp="AT";
        }
        if(adu=="Vien thong")
        {
            cmp="VT";
        }
        if(adu=="Dien tu")
        {
            cmp="DT";
        }
        xuli(cmp,ds,t);
    }
}
int main ()
{
        ct();
}