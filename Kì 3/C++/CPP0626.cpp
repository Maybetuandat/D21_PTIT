//https://code.ptit.edu.vn/student/question/CPP0626
//DANH SÁCH GIẢNG VIÊN THEO BỘ MÔN


#include<bits/stdc++.h>
using namespace std;
int dem=0;
class GiangVien
{
    private:
       string name,subject;
       int magv;
    public:
        friend istream &operator >>(istream &is, GiangVien &a)
        {
            getline(is,a.name);
            getline(is,a.subject);
            dem++;
            a.magv=dem;
            return is;
        }
        friend ostream &operator <<(ostream &os, GiangVien a)
        {
            os<<"GV";
            if(a.magv < 10)
              os<<"0";
            os<<a.magv<<" "<<a.name<<" "<<a.chuanhoa()<<endl;;
            return os;
        }
        string chuanhoa()
        {
            string cmp=subject;
            string ans="",cmp1;
            stringstream ss(cmp);
            while(ss>>cmp)
            {
                char ch=toupper(cmp[0]);
                ans=ans+ch;
            }
            return ans;
        }
        string getsubject()
        {
            return subject;
        }
};
string convert(string s)
{
    string ans="";
    string cmp;
    stringstream ss(s);
    while(ss>>cmp)
    {
          char ch=toupper(cmp[0]);
          ans=ans+ch;
    }
    return ans;
}
void ct()
{
    int n;  cin>>n; cin.ignore();
    GiangVien ds[n+1];
    for(int i=0; i<n; i++)
    {
        cin>>ds[i];
    }
    int t;  cin>>t; cin.ignore();   
    string adu;
    while(t--)
    {
        getline(cin,adu);
        cout<<"DANH SACH GIANG VIEN BO MON ";
        cout<<convert(adu)<<":\n";
        for(int i=0; i<n; i++)
        {
            if(adu.compare(ds[i].getsubject()) == 0)
                cout<<ds[i];
          
        }

    }
}
int main ()
{
    ct();
}