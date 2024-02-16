//https://code.ptit.edu.vn/student/question/CPP0627
//TÌM KIẾM GIẢNG VIÊN

#include<bits/stdc++.h>
using namespace std;
int dem=0;
class GiangVien
{
    private:
        string name, subject;
        int magv;
    public:
        string namefake="";
        friend istream &operator >>(istream &is, GiangVien &a)
        {
            getline(is,a.name);
            for(int i=0; i<a.name.length(); i++)
            {
                char ch=tolower(a.name[i]);
                a.namefake=a.namefake + ch;
            }
            getline(is,a.subject);
            dem++;
            a.magv=dem;
            return is;
        }
        string convert()
        {
            string ans="",cmp;
            stringstream ss(subject);
            while(ss>>cmp)
            {
                char ch=toupper(cmp[0]);
                ans=ans+ch;
            }
            return ans;
        }
        friend ostream &operator <<(ostream &os, GiangVien a )
        {
            os<<"GV";
            if(a.magv < 10)
               cout<<"0";
            os<<a.magv<<" "<<a.name<<" "<<a.convert()<<endl;
            return os;
        }
};
string convert(string s)
{
    string ans="";
    for(int i=0; i<s.length(); i++)
    {
        char ch=towlower(s[i]);
        ans=ans+ch;
    }
    return ans;
}
void ct()
{
    int n; cin>>n;cin.ignore();
    GiangVien ds[n+2];
    int i,t;
    for(i=0; i<n; i++)
        cin>>ds[i];
    cin>>t;  cin.ignore();
    string adu;
    while(t--)
    {
        getline(cin,adu);
        cout<<"DANH SACH GIANG VIEN THEO TU KHOA "<<adu<<":\n";
        string cmp=convert(adu);
        for(i=0; i<n; i++)
        {
            if(ds[i].namefake.find(cmp) <= ds[i].namefake.length() - cmp.length())
               cout<<ds[i];
        }
    }
}
int main ()
{
    ct();
}