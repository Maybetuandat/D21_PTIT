#include<bits/stdc++.h>
using namespace std;
struct NhanVien
{
	string name;
	string sex;
	string date;
	string addres;
	string  code;
	string contractual;
}; 
void nhap(struct NhanVien &a)
{
	getline(cin,a.name);
	getline(cin,a.sex);
	getline(cin,a.date);
	getline(cin,a.addres);
	getline(cin,a.code);
	getline(cin,a.contractual);
}
void in(struct NhanVien &a)
{
	cout<<"00001"<<" ";
	cout<<a.name<<" ";
	cout<<a.sex<<" ";
	cout<<a.date<<" ";
	cout<<a.addres<<" ";
	cout<<a.code<<" ";
	cout<<a.contractual;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
