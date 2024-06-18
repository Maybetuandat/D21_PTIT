#include<bits/stdc++.h>
using namespace std;
class SinhVien
{
    private:
        string classes,masv, name, email;
    public:
        friend istream &operator >>( istream &is, SinhVien &a)
        {
            is>>a.masv;
            is.ignore();
            getline(is,a.name);
            is>>a.classes;
            is>>a.email;
            return is;
        }
        string getclasses()
        {
            return classes;
        }
        friend ostream &operator <<(ostream &os, SinhVien a)
        {
            os<<a.masv<<" "<<a.name<<" "<<a.classes<<" "<<a.email<<endl;
            return os;
        }

};
void ct()
{
    int n,i;
    set<string> ss;
    SinhVien ds[1009];
    cin>>n;
    int kt[1009]={0};
    for( i=1; i<=n; i++)
    {
        cin>>ds[i];
        ss.insert(ds[i].getclasses());
    }
    int Q;
    cin>>Q;
    string findclass="";
    while(Q--)
    {
        cin>>findclass;
        if(ss.count(findclass) != 0)
        {
            cout<<"DANH SACH SINH VIEN LOP "<<findclass<<":\n";
            for( i=1; i<=n; i++)
                {
                    if(findclass.compare(ds[i].getclasses()) ==0 && kt[i] == 0)
                     {       
                        cout<<ds[i];
                        kt[i]=1;
                     }
                 }
        }
    }
}
int main ()
{
    ct();
}