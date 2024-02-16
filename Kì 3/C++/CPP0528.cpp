//https://code.ptit.edu.vn/student/question/CPP0528
//DANH SÁCH THỰC TẬP - 1

#include<bits/stdc++.h>
using namespace std;
int d=0;
struct SinhVien
{
    string msv,classes,name,email,factor;
    int dem;
};
void nhap(SinhVien &a)
{
    d++;
    a.dem=d;
    getline(cin,a.msv);
    getline(cin,a.name);
    getline(cin,a.classes);
    getline(cin,a.email);
    getline(cin,a.factor);
}
bool cmp(SinhVien a, SinhVien b)
{
    return a.name < b.name;
}
void ct()
{
    
    int n,i; cin>>n; cin.ignore();
    struct  SinhVien *ds = new SinhVien[n+1];
    for(i=0; i<n; i++)
        nhap(ds[i]);
    int t; cin>>t;  string adu;
    while(t--)
    {
        
        cin>>adu;
        vector<SinhVien> ans;
        for(i=0; i<n; i++)
        {
            if(adu==ds[i].factor)
                ans.push_back(ds[i]);
        }
        sort(ans.begin(), ans.end(), cmp);
        for(SinhVien x : ans)
        {
            cout<<x.dem<<" "<<x.msv<<" "<<x.name<<" "<<x.classes<<" "<<x.email<<" "<<x.factor<<endl;
        }
    }
}
int main ()
{
    ct();
}