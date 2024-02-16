#include<bits/stdc++.h>
using namespace std;
//thuật toán của bài toán: dễ thấy nếu x % p == 1 thì (x+p) % p == 1 =>> x ^ 2 % p == 1
//do đó chúng ta cần tìm 1 số lớn nhất của dãy từ các số cách nhau p đơn vị kể từ i
//tính số chư số trong đoạn từ i đến số đó (số cuối trù số đầu) / khoảng cách +1
// nhớ là số đó cần nhỏ hơn b nếu số đó lớn hơn ta chỉ cần giảm đi 1 khoảng là p
// ví dụ như số cuối cùng sẽ là last thì ans=ans+ (last -i) /p +1
void xuli(int  b, int  p )
{
    int  i,ans=0;
    for(i=1; i<p; i++)
    {
        if(  (i * i) % p == 1)
        {
            long long late = i + ( b / p ) * p;
            if( late > b)
              late=late-p;
            ans=ans+ (late-i) / p +1;
        }
    }
    cout<<ans<<endl;

}
void ct()
{
    int t;
    int b,p;
    cin>>t;
    while(t--)
    {
        cin>>b>>p;
        xuli(b,p);
    }
}
int  main ()
{
    ct();
}