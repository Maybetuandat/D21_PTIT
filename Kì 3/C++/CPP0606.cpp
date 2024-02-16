#include<bits/stdc++.h>
using namespace std;
class NhanVien
{
	private:
		string name;
		string sex;
		string date;
		string address;
		string code;
		string contructual;
	public:
		void nhap()
		{
			getline(cin,name);
			getline(cin,sex);
			getline(cin,date);
			getline(cin,address);
			getline(cin,code);
			getline(cin,contructual);
		}
		void xuat()
		{
			cout<<"00001"<<" ";
			cout<<name<<" ";
			cout<<sex<<" ";
			cout<<date<<" ";
			cout<<address<<" ";
			cout<<code<<" ";
			cout<<contructual<<" ";
		}
};
int main(){
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}
