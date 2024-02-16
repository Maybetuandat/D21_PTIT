#include<bits/stdc++.h>
using namespace std;
long long UCLN(long long a, long long b)
{
	long long du;
	while( b !=0)
	{
		du= a % b;
		a=b; 
		b=du;
	}
	return a;
}
struct PhanSo
{
	long long tu,mau;
};
void nhap( struct PhanSo &p)
{
	cin>>p.tu >>p.mau;
}
void rutgon( struct PhanSo &p)
{
	long long uc=UCLN(p.tu, p.mau);
	cout<<p.tu / uc <<"/" << p.mau / uc<<endl;
}
void in(struct PhanSo &p)
{
	
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
