/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j05031_bangdiemthanhphan2;

/**
 *
 * @author Dell Gaming
 */
class BangDiem implements Comparable<BangDiem>{
    private String masv, ten, lop;
    private double diem1, diem2, diem3;
    public BangDiem(String masv, String ten, String lop, double diem1, double diem2, double diem3) {
       
        this.masv = masv;
        this.ten = ten;
        this.lop = lop;
        this.diem1 = diem1;
        this.diem2 = diem2;
        this.diem3 = diem3;
    }
     public String toString()
     {
         return masv + " " + ten + " " + lop +" "+  String.format("%.1f", diem1) +" " +  String.format("%.1f", diem2) + " " + String.format("%.1f", diem3);
         
     }

    @Override
    public int compareTo(BangDiem o) {
        return ten.compareTo(o.ten);
    }
}

