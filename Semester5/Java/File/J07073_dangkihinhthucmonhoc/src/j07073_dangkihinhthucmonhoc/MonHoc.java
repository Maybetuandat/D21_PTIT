/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j07073_dangkihinhthucmonhoc;

/**
 *
 * @author Dell Gaming
 */
class MonHoc  implements  Comparable<MonHoc>{
      private String ma, ten , tinhchi,lythuyet, thuchanh; 

    public MonHoc(String ma, String ten, String tinhchi, String lythuyet, String thuchanh) {
        this.ma = ma;
        this.ten = ten;
        this.tinhchi = tinhchi;
        this.lythuyet = lythuyet;
        this.thuchanh = thuchanh;
    }

    public String getThuchanh() {
        return thuchanh;
    }
    public String toString()
    {
        return ma + " " + ten + " " + tinhchi+" " + lythuyet + " " + thuchanh;
    }

    @Override
    public int compareTo(MonHoc o) {
          return ma.compareTo(o.ma);
    }
      
}
