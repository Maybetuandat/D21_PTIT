/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j07050_sapxepmathang;

/**
 *
 * @author Dell Gaming
 */
class MatHang implements Comparable<MatHang>{
      private String ma, ten , nhom;
      private double giamua,  giaban, loinhuan;
      public static int num = 0;
    public MatHang(String ten, String nhom, double giamua, double giaban) {
        num++;
        this.ma = String.format("MH%02d", num);
        this.ten = ten;
        this.nhom = nhom;
        this.giamua = giamua;
        this.giaban = giaban;
        this.loinhuan = this.giaban - this.giamua;
    }

    @Override
    public int compareTo(MatHang o) {
          return (int) (o.loinhuan - loinhuan);
    }
    public String toString()
    {
        return ma + " " + ten + " "+ nhom + " " + String.format("%.2f", loinhuan);
    }            
}
