#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b)
{
	long long du;
	while( b != 0)
	{
		du = a % b;
		a=b;
		b=du;
	}
	return a;
}
long long lcm(long long a, long long b)
{
	return a*b / gcd(a,b);
}
class PhanSo
{
	private:
		long long tu,mau;
	public:	
	PhanSo(long long a, long long b)
	{
		tu=a;
		mau=b;
	}
	friend istream &operator >> (istream &is, PhanSo &a)
	{
		is>>a.tu >>a.mau;
		return is;
	}
	friend ostream &operator <<(ostream &os, PhanSo a)
	{
		os <<a.tu <<"/" <<a.mau;
		return os;
	}
	void rutgon()
	{
		long long uc=gcd(tu,mau);
		tu = tu / uc;
		mau = mau /uc;
		
	}
	friend PhanSo operator + (PhanSo a, PhanSo b)
	{
		PhanSo k(1,1);
		long long bc=lcm( a.mau, b.mau);
		k.tu=( a.tu * (bc/a.mau) + b.tu * (bc / b.mau));
		k.mau=bc;
		k.rutgon();
		return k;
	}
};
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
