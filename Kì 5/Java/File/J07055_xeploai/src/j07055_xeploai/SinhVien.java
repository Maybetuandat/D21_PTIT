/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j07055_xeploai;

/**
 *
 * @author Dell Gaming
 */
class SinhVien implements Comparable<SinhVien>{
      private String hoten, xeploai, masv;
      private double diemluyentap, thuchanh, thi, tongket;
      public static int num = 0;
    public SinhVien(String hoten, double diemluyentap, double thuchanh, double thi) {
        num++;
        this.masv = String.format("SV%02d", num);
        this.hoten = hoten;
        this.diemluyentap = diemluyentap;
        this.thuchanh = thuchanh;
        this.thi = thi;
        this.tongket = diemluyentap * 0.25 + thuchanh * 0.35 + thi * 0.4;
        if(tongket >= 8)
        {
            xeploai = "GIOI";
        }
        if(tongket < 8  && tongket >= 6.5)
        {
            xeploai = "KHA";
        }
        if(tongket >= 5 && tongket < 6.5)
        {
            xeploai = "TRUNG BINH";
        }
        if(tongket < 5)
        {
            xeploai = "KEM";
        }
        chuanhoahoten();
    }
    void chuanhoahoten()
    {
        String cmp = "";
        String [] s= hoten.trim().toLowerCase().split("\\s+");
        for(String x : s)
            cmp = cmp + x.substring(0, 1).toUpperCase() + x.substring(1) + " ";
        hoten = cmp.trim();
    }

    @Override
    public int compareTo(SinhVien o) {
           return (int) (1000 * (o.tongket - tongket));
    }
    public String toString()
    {
        return masv + " " + hoten + " " + String.format("%.2f", tongket) + " " + xeploai;
    }
}
