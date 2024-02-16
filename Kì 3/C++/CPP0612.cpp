#include<bits/stdc++.h>
using namespace std;
class SinhVien
{
    private:
    string name,date,classes,masv;
    double gpa;
    static int dem;
    public:
        SinhVien();
        friend istream &operator >>(istream &is, SinhVien &a)
        {
            is.ignore();
            getline(is, a.name);
            is>>a.classes;
            is>>a.date;
            is>>a.gpa;
            return is;
        }
        friend ostream &operator <<(ostream &os, SinhVien a)
        {
            //chuan hoa ma sv
            dem++;
            a.masv="B20DCCN0";
            if(dem<10)
               a.masv=a.masv+"0";
            a.masv=a.masv+to_string(dem);
            os<<a.masv<<" ";
            stringstream ss(a.name);
            string cmp;
            while(ss>>cmp)
            {
                cmp[0]=toupper(cmp[0]);
                for(int i=1; i<cmp.length(); i++)
                {
                    cmp[i]=tolower(cmp[i]);
                }
                os<<cmp<<" ";
            }
            //xu li date
            if(a.date[2] != '/')
               a.date.insert(0,"0");
            if(a.date[5] != '/')
               a.date.insert(3,"0");
            os<<a.classes<<" "<<a.date<<" ";
            os<<fixed<<setprecision(2)<<a.gpa<<endl;
            return os;
        }
};
SinhVien::SinhVien()
{
    name="";
    date="";
    classes="";
    gpa = 0;
}
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