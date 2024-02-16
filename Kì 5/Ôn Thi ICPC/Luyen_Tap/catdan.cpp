#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct dl
{
	int x,y;
};

dl mau1, mau2, mau3, mau4;
dl test1, test2, test3, test4;
set<int> canhmau;
struct phanso
{
	int t, m;
};
int ucln(int a, int b)
{
	int du = 0;
	while(b != 0)
	{
		du = a % b;
		a = b;
		b = du;
	}
	return a;
}
phanso rutgon(phanso a)
{
	int uc = ucln(a.t, a.m);
	a.t = a.t / uc;
	a.m = a.m / uc;
	return a;
}
phanso  psmau;

int dem = 0;
void xuli()
{
	
	set<int> canhtest;
	cin>>test1.x>>test1.y>>test2.x>>test2.y>>test3.x>>test3.y>>test4.x>>test4.y;	
	int canh1 = (test1.x - test2.x) * (test1.x - test2.x) + (test1.y - test2.y) * (test1.y - test2.y);

	canhtest.insert(canh1);
	int canh2 = (test2.x - test3.x) * (test2.x - test3.x) + (test2.y - test3.y) * (test2.y - test3.y);

	canhtest.insert(canh2);

	int canh3 = (test3.x - test4.x) * (test3.x - test4.x) + (test3.y - test4.y) * (test3.y - test4.y);

	canhtest.insert(canh3);
	int canh4 = (test1.x - test4.x) * (test1.x - test4.x) + (test1.y - test4.y) * (test1.y - test4.y);

	canhtest.insert(canh4);

	if(canhtest != canhmau)
	  return;
	else
	  dem++;



}
int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin>>mau1.x>>mau1.y>>mau2.x>>mau2.y>>mau3.x>>mau3.y>>mau4.x>>mau4.y;
	
	int canh1 = (mau1.x - mau2.x) * (mau1.x - mau2.x) + (mau1.y - mau2.y) * (mau1.y - mau2.y);

	canhmau.insert(canh1);

	int canh2 = (mau2.x - mau3.x) * (mau2.x - mau3.x) + (mau2.y - mau3.y) * (mau2.y - mau3.y);	
	canhmau.insert(canh2);
	
	int canh3 = (mau3.x - mau4.x) * (mau3.x - mau4.x) + (mau3.y - mau4.y) * (mau3.y - mau4.y);	
	canhmau.insert(canh3);

	int canh4 = (mau1.x - mau4.x) * (mau1.x - mau4.x) + (mau1.y - mau4.y) * (mau1.y - mau4.y);	
	canhmau.insert(canh4);

	int duongcheo = (mau2.x - mau4.x) * (mau2.x - mau4.x) + (mau2.y - mau4.y) * (mau2.y - mau4.y);	

	psmau.t  = canh1 * canh1 + canh4 * canh4 - duongcheo * duongcheo;
	psmau.m = 2 * canh1 * canh4;
	psmau = rutgon(psmau);
	int t; cin>>t;
	while(t--)
	{
		xuli();
	}	

	cout<<dem<<endl;
	return 0;
}