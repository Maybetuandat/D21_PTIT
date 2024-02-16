#include<bits/stdc++.h>
using namespace std;
class SinhVien
{
private:
		string name;
	string classes;
	string date;
	double gpa;
	 
public:

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
		stringstream ss1(sv.name);
		string cmp;
		while( ss1 >> cmp)
		{
			cmp[0]=toupper(cmp[0]);
			for(int i=1; i<cmp.length(); i++)
			   cmp[i]=tolower(cmp[i]);
			cout<<cmp<<" ";
		}
		os <<sv.classes <<" ";
		 stringstream ss(sv.date);
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

