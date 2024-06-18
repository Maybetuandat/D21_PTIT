#include<bits/stdc++.h>
// thuat toan cua bai la 
// đầu tiên tìm phần tử trước của dãy tăng cuối cùng 
//ví dụ với dãy là 1 2 4 3 phẩn tử trước dãy tăng cuối cùng là số 4 do dãy tăng cuối cùng chỉ có một phần tử là 3
// thì vị trí chúng ta xét là vị trí của số 4 tức là vị trí thứ 2 ta sẽ đặt vt=2
// sau đó từ vị trí  vt+1 chạy đến n-1 tìm phần từ bé hơn a[vt]. đặt vị trí ở đâyy là vt2. đổi chõ a[vt] với a[vt2]
//cuối cùng là sapwx xếp từ a[vt+1] đến n-1 tăng  dần 
//  
using namespace std;
bool cmp(int a, int b)
{
	return a > b;
}
void xuli(int a[], int n)
{
	int pos;
	for(int i = n-1; i >= 0; i--)
	{
		if(a[i] < a[i-1])
		{
			pos = i-1;
			break;
		}		
	}
	int maxval = 0, posmax = 0,min=n;
	for(int i = pos + 1; i<n; i++)
	{
		if(a[i] > maxval && a[pos] >a[i] && (a[pos] - a[i]) < min)
		{
			maxval = a[i];
			min=a[pos]-a[i];
			posmax = i;
		}
	}
	swap(a[pos], a[posmax]);
	sort(a + pos + 1, a + n, cmp);
	
	for(int i = 0; i<n; i++)
	{
		cout <<  a[i] << " ";
	}
}
void ct()
{
  int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i< n; i++)
			cin >> a[i];
		xuli(a, n);
		cout << endl;
	}
}
int main()
{
	ct();
}
