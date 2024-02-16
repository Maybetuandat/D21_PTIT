#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll v,e;
ll parent[100001], num[100001], ans;
void make_set()
{
	for(int i=1; i<=v; i++)
	{
		parent[i] = i;
		num[i] = 1;
	}
}  // mac dinh: leader cua a[i] la i
int find(int v)
{
	if(v == parent[v])
	  return v;
	return find(parent[v]);
} // tim kiem leader: 
void Union(int a, int b)
{
	// gop hai tap rieng le voi nhau
	a = find(a);
	b = find(b);
	if(a == b)
	  return;  // neu chung cung chung mot tap hop thi khong can lam gi
	  
	//mac dinh la a la cha va co so luong diem trong 1 thanh phan lien thong lon hon b
	if(num[a] < num[b])
	   swap(a,b);
	   
	parent[b] = a;  // cha cua b duoc gan bang a
	
	num[a] += num[b];// tang so luong dinh thuoc thanh phan lien thong do a lam chu
	ans = max(ans, num[a]);
}
void ct()
{

	cin>>v>>e;
	make_set();
	ans = 0;
	for(int i=1; i<=e; i++)
	{
		int x,y; cin>>x>>y;
		Union(x,y);
	}
	cout<<ans<<endl;
}
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin>>t;
	while(t--)
	{
		ct();
	}
}
