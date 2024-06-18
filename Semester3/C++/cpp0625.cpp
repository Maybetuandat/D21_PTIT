//https://code.ptit.edu.vn/student/question/CPP0625

//SẮP XẾP DANH SÁCH GIẢNG VIÊN
#include<bits/stdc++.h>
using namespace std;
class GiangVien
{
    private:
        string ten,nganh;
       
    public:
     int static dem;
       int d;
        void tangdem()
        {
            dem++;
        }
        friend istream &operator >>(istream &is, GiangVien &a)
        {
            getline(cin,a.ten);
            getline(cin,a.nganh);
            a.tangdem();
            a.d=a.dem;
            return is;
        }
        friend ostream &operator <<(ostream &os, GiangVien a)
        {
            cout<<"GV";
            if(a.d < 10)
               cout<<"0";
            cout<<a.d<<" ";
            cout<<a.ten<<" "<<a.chuanhoa()<<endl;
            return os;
        }
        string chuanhoa();
        string getname();
};
string GiangVien::getname()
{
    int i;
    for( i=ten.length()-1; i>=0; i--)
       if(ten[i] == ' ')
          break;
    string ans=ten.substr(i+1,ten.length()-i);
    return ans;
}
string GiangVien::chuanhoa()
{
    string cmp1;
    string ans="";
    stringstream ss(nganh);
    while( ss>>cmp1)
    {
        char ch=toupper(cmp1[0]);
        ans=ans+ch;
    }
    return ans;
}
bool cmp(GiangVien a, GiangVien b)
{

    if(a.getname() < b.getname())
    {
        return true;
    }
    if(a.getname() == b.getname())
    {
        if(a.d < b.d)
                return true;
        else
           return false;
    }
    return false;
}
int GiangVien::dem=0;
void ct()
{
    int n; cin>>n;
    cin.ignore();
    GiangVien ds[n+1];
    for(int i=0; i<n; i++)
      cin>>ds[i];
    sort(ds,ds+n,cmp);
    for(int i=0; i<n; i++)
    {
       cout<<ds[i];
     //  cout<<ds[i].getname();
    }
}
int main()
{
    ct();

}
