#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b)
{
	long long du;
	while ( b != 0)
	{
		du=a % b;
		a = b;
		b = du;
	}
	return a;
}
struct PhanSo
{
	long long tu,mau;
	
};
void nhap(struct PhanSo &p)
{
	cin>>p.tu >>p.mau;
}
PhanSo tong(struct PhanSo p, struct PhanSo q)
{
	long long uc=gcd(p.mau, q.mau);
	long long bc=p.mau * q.mau / uc;
	tong.tu=p.tu * ( bc / p.mau) + q.tu * (bc /q.mau);
	tong.mau=bc; 
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
