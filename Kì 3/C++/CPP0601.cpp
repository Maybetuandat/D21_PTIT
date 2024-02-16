//https://code.ptit.edu.vn/student/question/CPP0601
//KHAI BÁO LỚP SINH VIÊN - 1

#include<bits/stdc++.h>
using namespace std;
class SinhVien
{
	private:
		string name,classes,date;
		double gpa;
	public:
		void nhap();
		void xuat();
};
void SinhVien::nhap()
{
	getline(cin,name);
	getline(cin,classes);
	getline(cin,date);
	cin>>gpa;
}
void SinhVien::xuat()
{
	cout<<"B20DCCN001 "<<name<<" "<<classes<<" ";
	if(date[2] != '/')
	   date.insert(0,"0");
	if(date[5] != '/')
	  date.insert(3,"0");
	cout<<date<<" ";
	cout<<fixed<<setprecision(2)<<gpa<<endl;
}
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}