#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ios::sync_with_stdio(false) ;
	cin.tie(nullptr);
	int n;
	cin>>n;
	int a[n];
	int b[n];
	set<int>se;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++) cin>>b[i];
	int l=0;
	int dem=0;
	for(int i=0;i<n;i++){
		while(se.count(a[l])){
			l++;
		}
		if(a[l]==b[i]){
			dem++;
			l++;
		}
		se.insert(b[i]);
	//	cout<<dem<<" "<<a[l]<<" ";
	}
	cout<<n-dem;
}