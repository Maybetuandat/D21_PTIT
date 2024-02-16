#include<bits/stdc++.h>
using namespace std;
class NhanVien
{
    private:
        string name,sex,date,address,phone,date2,manv;
        static int dem;
    public:
    NhanVien();
    ~NhanVien();
    friend istream &operator >>(istream &is, NhanVien &a)
    {
            cin.ignore();
        dem++;
        a.manv="000";
        if(dem<10)
            a.manv=a.manv+"0";
        a.manv=a.manv+to_string(dem);
        getline(cin,a.name);
        cin>>a.sex;
        cin>>a.date;
        cin.ignore();
        getline(cin,a.address);
        cin>>a.phone;
        cin>>a.date2;
        return is;
    }
    friend ostream &operator <<(ostream &os, NhanVien a)
    {
        cout<<a.manv<<" "<<a.name<<" "<<a.sex<<" "<<a.date<<" "<<a.address<<" "<<a.phone<<" "<<a.date2<<endl;
        return os;
    }
};
NhanVien::NhanVien()
{
    name=sex=date=address=phone=date2=manv="";
}
NhanVien::~NhanVien()
{
}
int NhanVien::dem=0;
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}