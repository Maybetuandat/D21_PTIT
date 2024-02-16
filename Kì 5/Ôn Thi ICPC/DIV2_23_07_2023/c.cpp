#include<iostream>
#include<algorithm>
using namespace std;
const int N=2e5+5;
typedef long long ll;
ll a[N],b[N];
int main()
{
	int T;
	cin>>T;
	while(T--){
		ll n,k;
		cin>>n>>k;
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[i]=a[i]-i;
		}
		ll res=1;
		for(int i=0;i<k;i++){
			res+=upper_bound(b,b+n,res)-b;
		}
		cout<<res<<'\n';
	}
} 