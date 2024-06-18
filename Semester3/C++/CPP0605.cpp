#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b)
{
	long long du;
	while( b != 0)
	{
		du= a % b;
		a=b;
		b=du;
	}
	return a;
}
class PhanSo 
{
	public:
		   PhanSo(long long a, long long b)
		   {
			tu=a;
			mau=b;
		   };
		   friend istream &operator >>(istream &is, PhanSo &ps)
		   {
				is>>ps.tu >>ps.mau;
				return is;		   	
		   }
		   void rutgon()
		   {
		   	 long long uc=gcd(tu,mau);
		   	 tu=tu/uc;
		   	 mau=mau/uc;
		   };
		   friend ostream &operator <<(ostream &os, PhanSo ps)
		   {
		   	   os<<ps.tu <<"/"<< ps.mau<<endl;
		   	   return os;
		   }
		   
	private:
		long long tu,mau;
		
};
int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
