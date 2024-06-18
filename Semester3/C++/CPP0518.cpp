//https://code.ptit.edu.vn/student/question/CPP0518
//SẮP XẾP DANH SÁCH NHÂN VIÊN

#include<bits/stdc++.h>
using namespace std;
int dem=0;
struct NhanVien
{
    string manv,name,sex,birth,date,addres, code;
    int day,month,year;
};
void nhap(NhanVien &a)
{
    dem++;
    if(dem == 1)
       cin.ignore();
    a.manv=to_string(dem);
    while(a.manv.length() < 5)
        a.manv='0'+a.manv;
    getline(cin,a.name);
    getline(cin,a.sex);
    getline(cin,a.birth);
//    cin>>a.month>>a.day>>a.year;
//    cin.ignore();
    for(int i=0; i<2; i++)
       a.month=a.month*10+(a.birth[i]-'0');
    
    
    for(int i=3; i<5; i++)
       a.day=a.day*10+(a.birth[i]-'0');


    for(int i=6; i<a.birth.length(); i++)
       a.year=a.year*10+(a.birth[i]-'0');

    getline(cin,a.addres);
    getline(cin,a.code);
    getline(cin,a.date);
}
bool cmp(NhanVien a, NhanVien b)
{
    if( a.year < b.year)
       return true;
    if(a.year == b.year)
    {
        if(a.month < b.month)
          return true;
        else
        {
            if(a.month == b.month)
            {
                if(a.day<b.day)
                  return true;
                else
                    return false;
            }
            else
              return false;
        }
    }
    return false;
}
void sapxep(NhanVien ds[], int N)
{
    sort(ds,ds + N, cmp);
}
void inds(NhanVien ds[], int N)
{
    for(int i=0; i<N; i++)
       cout<<ds[i].manv<<" "<<ds[i].name<<" "<<ds[i].sex<<" "<<ds[i].birth<<" "<<" "<<ds[i].addres<<" "<<ds[i].code<<" "<<ds[i].date<<endl;
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}