#include<bits/stdc++.h>
using namespace std;
#define PI 3.141592653589793238
struct Point
{
	double x,y;
};
double tinhcanh(Point a, Point b)
{
	double canh=(double)sqrt((a.x-b.x) * (a.x-b.x) + (a.y-b.y) * (a.y-b.y)) ;
	return canh;
}
void tinhs(double a, double b, double c)
{
	double s=(double)1/4 * sqrt((a+b+c) * (a+b-c) * (b+c-a) * (c+a-b) );
	double r=(double) a*b*c/(4*s);
	s=(double) PI*r*r;
	cout<<fixed<<setprecision(3) <<s<<endl;
}
void ct()
{
	Point a,b,c;
	int t; cin>>t;
	while(t--)
	{
		cin>>a.x>>a.y;
		cin>>b.x>>b.y;
		cin>>c.x>>c.y;
		double canh1=(double)tinhcanh(a,b), canh2=(double)tinhcanh(b,c), canh3=(double)tinhcanh(a,c);
		if(canh1 + canh2 <= canh3 || canh1+canh3<=canh2 || canh2+canh3<=canh1)
		   cout<<"INVALID\n";
		else
			tinhs(canh1,canh2,canh3);
	}
	
}
int main ()
{
	ct();
}
