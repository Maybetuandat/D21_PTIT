#include<bits/stdc++.h>
using namespace std;
class SinhVien
{
private:
	
	 
public:
	string name;
	string classes;
	string date;
	double gpa;
   	friend istream &operator >>(istream &is, SinhVien &sv)
   	{
   		getline(is,sv.name);
   		getline(is,sv.classes);
   		getline(is,sv.date);
   		is>>sv.gpa;
   		return is;
	}
	friend ostream &operator <<(ostream &os, SinhVien sv)
	{
		os <<"B20DCCN001 ";
		os <<sv.name <<" ";
		os <<sv.classes <<" ";
		stringstream ss(sv.date);
	string cmp;
	while( getline(ss,cmp,'/'))
	{
		int n = stoi(cmp);
		if( n < 10)
		{
			os<<"0"<<n<<"/";
		}
		else
		{
			if(n > 32)
			  os<<n;
			else
			   os<<n<<"/";
		}
	}
	os<<" ";
	os<<fixed<<setprecision(2)<<sv.gpa;
	return os;
 }
};
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}

