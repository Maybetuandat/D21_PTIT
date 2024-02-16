/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j05007_sapxepdanhsachdoituongnhanvien;

/**
 *
 * @author Dell Gaming
 */
class NhanVien implements Comparable<NhanVien>{
    private String manv, hoten, gioitinh, ngaysinh, diachi, masothue, ngaykihopdong;
    public static int num  = 0;
    private int nam, ngay, thang;
    public NhanVien(String hoten, String gioitinh, String ngaysinh, String diachi, String masothue, String ngaykihopdong) {
        num++;
        manv = String.format("%05d", num);
        this.hoten = hoten;
        this.gioitinh = gioitinh;
        this.ngaysinh = ngaysinh;
        this.diachi = diachi;
        this.masothue = masothue;
        this.ngaykihopdong = ngaykihopdong;
        init();
    }
    private void init()
    {
        ngay = Integer.parseInt(ngaysinh.substring(0, 2));
        thang = Integer.parseInt(ngaysinh.substring(3, 5));
        nam = Integer.parseInt(ngaysinh.substring(6));
    }
    @Override
    public int compareTo(NhanVien o) {
          if( nam == o.nam)
          {
              if(thang == o.thang)
              {
                  return (int) ( ngay - o.ngay);
              }
              return (int) (thang - o.thang);
          }
          return nam-o.nam;
    }
    public String toString()
    {
        return manv + " " + hoten +  " " + gioitinh + " " + ngaysinh +" " + diachi + " " + masothue + " " + ngaykihopdong;
    }
}
