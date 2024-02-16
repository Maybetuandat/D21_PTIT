#include<bits/stdc++.h>
using namespace std;
struct ThiSinh
{
	string name;
	string date;
	double diem1,diem2,diem3;	
};
void nhap( struct ThiSinh &A)
{
	getline(cin, A.name);
	cin>>A.date;
	cin >>A.diem1  >>A.diem2 >>A.diem3;
}
void in(struct ThiSinh &A)
{
	cout<<A.name<<" "<<A.date <<" ";
	double tong=A.diem1 + A.diem2 + A.diem3;
	cout<<fixed <<setprecision(1) <<tong<<endl;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
