#include<bits/stdc++.h>
using namespace std;
struct SinhVien
{
	string name;
	string classes;
	string date;
	float gpa;
};
void nhapThongTinSV(struct SinhVien &a)
{
	getline(cin,a.name);
	cin>>a.classes;
	cin>>a.date;
	cin>>a.gpa;
}
void inThongTinSV(struct SinhVien a)
{
	cout<<"N20DCCN001"<<" ";
	cout<<a.name<<" ";
	cout<<a.classes<<" ";
	int n=a.date.length(),dem=0,i=0;
	while(i<n)
	{
		if( a.date[i] == '/')
		{
		  	if( dem < 2)
		  	{
			  
			   a.date.insert(i-1, "0");
			   i=i+2;
	 	    }
	 	    else
	 	       i=i+1;
			dem=0;
	    }
		else
		{
		  dem++;
		  i++;
		}
	}
	cout<<a.date<<" ";
	cout<<fixed<<setprecision(2)<<a.gpa<<endl;
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
