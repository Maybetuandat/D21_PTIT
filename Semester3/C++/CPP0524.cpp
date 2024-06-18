//https://code.ptit.edu.vn/student/question/CPP0524
//BẢNG ĐIỂM THÀNH PHẦN - 1

#include<bits/stdc++.h>
using namespace std;
struct SinhVien
{
    string  masv,name,classes;
    string diem1,diem2,diem3;
};
void nhap(SinhVien &a)
{
    cin>>a.masv;
    cin.ignore();
    getline(cin,a.name);
    cin>>a.classes;
    cin>>a.diem1;
    cin>>a.diem2;
    cin>>a.diem3;
}
bool cmp(SinhVien a, SinhVien b)
{
    return a.masv < b.masv;
}
void sap_xep(SinhVien ds[], int n)
{
    sort(ds,ds+n,cmp);
}
void in_ds(SinhVien ds[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<i+1<<" "<<ds[i].masv<<" "<<ds[i].name<<" "<<ds[i].classes<<" ";
        // cout<<fixed<<setprecision(1)<<ds[i].diem1<<" ";
        // cout<<fixed<<setprecision(1)<<ds[i].diem2<<" ";
        // cout<<fixed<<setprecision(1)<<ds[i].diem3<<endl;
        cout<<ds[i].diem1<<" "<<ds[i].diem2<<" "<<ds[i].diem3<<endl;
    }
}
int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}