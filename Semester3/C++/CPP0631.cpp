//chúng ta sẽ sử dụng thêm 2 class khach hang va mat hang nua, khai bao bien toan cuc khi doc du lieu vao cac lop khach hang va mat hang thì ta 
//gán các giá trị của lớp đó vào bên trong của kh và mh ở biến toàn cục sau đó sử dụng nó ở trong lớp (class) hóa đơn
//https://code.ptit.edu.vn/student/question/CPP0631
//QUẢN LÝ BÁN HÀNG – 1

#include<bits/stdc++.h>
using namespace std;
int kh=0,mh=0,hd=0;
class KH
{   public:
      string  ten,gt,ns,dc,makh;
      KH()
      {
        ten="";
        gt="";
        ns="";
        dc="";
        makh="";
      }
};
class MH
{
    public:
       string tenmh, donvitinh,giamua,giaban,mamathang;
       MH()
       {
        tenmh="";
        donvitinh="";
        giamua="";
        mamathang="";
       }
};
KH ans[100];
MH result[100];
class KhachHang
{
    public:
        string name,sex,birth,addres,makh;
        friend istream &operator >> (istream &is,KhachHang &a )
        {
            
            kh++;
            if(kh==1)  is.ignore();
            getline(is,a.name);
            ans[kh].ten=a.name;
            getline(is,a.sex);
            ans[kh].gt=a.sex;
            getline(is,a.birth);
            ans[kh].ns=a.birth;
            getline(is,a.addres);
            ans[kh].dc=a.addres;
          
            string cmp=to_string(kh);
            while(cmp.length() < 3)
               cmp='0'+cmp;
            a.makh="KH"+cmp;
            ans[kh].makh=a.makh;
            return is;
        }
};
class MatHang
{
    public:
         string tenmh, donvitinh,giamua,giaban,mathang;
        friend istream &operator >> (istream &is, MatHang &a)
        {
            
               mh++;
               if(mh== 1)  is.ignore();
            getline(is,a.tenmh);
            result[mh].tenmh=a.tenmh;

            getline(is,a.donvitinh);
            result[mh].donvitinh=a.donvitinh;
            
            getline(is,a.giamua);
            result[mh].giamua=a.giamua;

            getline(is,a.giaban);
            result[mh].giaban=a.giaban;

            string cmp=to_string(mh);
            while(cmp.length() < 3)
                cmp='0'+cmp;
            a.mathang="MH"+cmp;
            result[mh].mamathang=a.mathang;
            return is;
        }
};
class HoaDon 
{
    public:
        string  mahoadon, makhachhang, mamathang;
        int soluong;
        friend istream &operator >>(istream &is, HoaDon &a)
        {
            cin>>a.makhachhang;
            cin>>a.mamathang;
            cin>>a.soluong;
            hd++;
            string cmp=to_string(hd);
            while(cmp.length() < 3)
               cmp='0'+cmp;
            a.mahoadon="HD"+cmp;
            return is;
        }
        friend ostream &operator <<(ostream &os, HoaDon a);
};
ostream &operator << (ostream &os, HoaDon a)
{
    int i;
    cout<<a.mahoadon<<" ";
    for( i=1; i<=kh; i++)
    {
        if(a.makhachhang == ans[i].makh )
        {
           cout<<ans[i].ten<<" "<<ans[i].dc<<" ";
           break;
        }
    }
    for(i=1; i<=mh; i++)
    {
        if(result[i].mamathang == a.mamathang)
        {
            cout<< result[i].tenmh<<" "<<result[i].donvitinh<<" "<<result[i].giamua<<" "<<result[i].giaban<<" "<<a.soluong<<" ";
            long long cmp=0;
            for(int j=0; j<result[i].giaban.length(); j++)
            {
                int k=result[i].giaban[j] - '0';
                cmp=cmp*10+k;
            }
            cout<<cmp*a.soluong<<endl;
            break;
        }
    }

    return os;
}
int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];
    
    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}