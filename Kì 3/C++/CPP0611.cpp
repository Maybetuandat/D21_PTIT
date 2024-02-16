#include<bits/stdc++.h>
using namespace std;
class SinhVien 
{
    private:
        string masv,name, classes, date;
        double gpa;
        static int dem;
    public:
        friend istream &operator >>( istream &is, SinhVien &a)
        {
            is.ignore();
            getline(is, a.name);
            is>>a.classes;
            is>>a.date;
            is>>a.gpa;
            return is;
        }
        SinhVien();
        friend ostream &operator <<(ostream &os, SinhVien a)
        {
            dem++;
            a.masv="B20DCCN0";
            if(dem<10)
                a.masv=a.masv+"0";
           a.masv=a.masv+to_string(dem);
            os<<a.masv<<" ";
            os<<a.name<<" "<<a.classes<<" ";
            //chuan hoa ngay thang nam
            if(a.date[2] != '/')
               a.date.insert(0,"0");
            if(a.date[5] != '/')
               a.date.insert(3,"0");
            os<<a.date<<" ";
            os<<fixed<<setprecision(2)<<a.gpa<<"\n";
            return os;
        }
};
SinhVien::SinhVien()
{
    name="";
    classes="";
    date="";
    gpa=0;
};
int SinhVien::dem=0;
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}