#include<bits/stdc++.h>
using namespace std;
class SinhVien
{
    private:
            string name,classes, date, masv;
            double gpa;
            static int dem;
    public:
        SinhVien();
        double getgpa()
        {
            return gpa;
        }
        friend istream &operator >>(istream &is, SinhVien &a)
        {
            scanf("\n");
            getline(is, a.name);
            is>>a.classes;
            is>>a.date;
            is>>a.gpa;
            dem++;
            a.masv="B20DCCN0";
            if(dem<10)
               a.masv=a.masv+"0";
            a.masv=a.masv+to_string(dem);
            return is;
        }
        friend ostream &operator <<(ostream &os, SinhVien a)
        {
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
int SinhVien::dem=0;
bool cmp(SinhVien a, SinhVien b)
{
    return a.getgpa() > b.getgpa();
}
void sapxep(SinhVien ds[], int n)
{
    sort(ds, ds+n , cmp);
}
SinhVien::SinhVien()
{
    gpa=0;
    name="";
    date="";
    masv="";
    classes="";
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}