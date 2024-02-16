/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j07054_tinhdiemtrungbinh;

/**
 *
 * @author Dell Gaming
 */
class SinhVien implements Comparable<SinhVien>{
      public static int num = 0;
      private String ten, masv;
      private double diem1, diem2, diem3, diemtrungbinh;
      private int thuhang;

    public SinhVien(String ten, double diem1, double diem2, double diem3) {
        num ++;
        this.masv = String.format("SV%02d", num);
        this.ten = ten;
        chuanhoahoten();
        this.diem1 = diem1;
        this.diem2 = diem2;
        this.diem3 = diem3;
        this.diemtrungbinh = (diem1 * 3 + diem2 * 3  + diem3 * 2) / 8;
    }

    public void setThuhang(int thuhang) {
        this.thuhang = thuhang;
    }
    void chuanhoahoten()
    {
        String [] s= ten.trim().toLowerCase().split("\\s+");
        String cmp = "";
        for(String x : s)
            cmp = cmp + x.substring(0, 1).toUpperCase() +x.substring(1) + " ";
        ten = cmp.trim();
    }

    public double getDiemtrungbinh() {
        return diemtrungbinh;
    }
    @Override
    public int compareTo(SinhVien o) {
         if(diemtrungbinh - o.diemtrungbinh == 0)
             return masv.compareTo(o.masv);
         return (int)((o.diemtrungbinh - diemtrungbinh) * 100);
    }
    public String toString()
    {
        return masv + " " + ten + " " + String.format("%.2f", diemtrungbinh) + " "+ thuhang;
    }
      
}
