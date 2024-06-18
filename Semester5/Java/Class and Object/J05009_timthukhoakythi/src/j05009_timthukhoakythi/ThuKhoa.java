/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j05009_timthukhoakythi;

/**
 *
 * @author Dell Gaming
 */
class ThuKhoa implements Comparable<ThuKhoa>{
    private String hoten, ngaysinh;
    public static int num = 0;
    private double diem1, diem2, diem3, tongdiem;
    private int mats;
    public ThuKhoa(String hoten, String ngaysinh, double diem1, double diem2, double diem3) {
        num++;
        this.mats =  num;
        this.hoten = hoten;
        this.ngaysinh = ngaysinh;
        this.diem1 = diem1;
        this.diem2 = diem2;
        this.diem3 = diem3;
        tongdiem = diem1 + diem2 + diem3;
    }
    public String toString()
    {
        return mats + " " + hoten + " " + ngaysinh + " " + String.format("%.1f", tongdiem);
    }

    public double getTongdiem() {
        return tongdiem;
    }
    
    @Override
    public int compareTo(ThuKhoa o) {
        if(tongdiem == o.tongdiem)
        {
            return (int) (mats - o.mats);
        }
        return (int) (1000 * (o.tongdiem - tongdiem));
    }
    
}
