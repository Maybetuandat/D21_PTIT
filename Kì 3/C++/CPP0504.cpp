#include<bits/stdc++.h>
using namespace std;
struct SinhVien
{
	string name;
	string lop;
	string date;
	double gpa;	
};
void nhap( struct SinhVien &a)
{
	getline(cin, a.name);
	cin>>a.lop;
	cin>>a.date;
	cin >>a.gpa;;
}
void in(struct SinhVien &a)
{
	cout<<"B20DCCN001" <<" ";
	cout<<a.name<<" ";
	cout<<a.lop<<" ";
	stringstream ss(a.date);
	string cmp;
	while( getline(ss,cmp,'/'))
	{
		int n=stoll(cmp);
		if( n < 10)
		{
			cout<<"0"<<n<<"/";
		}
		else
		if( n < 32)
		{
			cout<<n<<"/";
		}
		else
		cout<<n;
		
	}
	cout<<" ";
	cout<<fixed<<setprecision(2) <<a.gpa <<endl;
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
