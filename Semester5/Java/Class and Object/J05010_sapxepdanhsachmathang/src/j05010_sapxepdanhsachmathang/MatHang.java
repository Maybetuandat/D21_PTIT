/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j05010_sapxepdanhsachmathang;

/**
 *
 * @author Dell Gaming
 */
class MatHang implements Comparable<MatHang>{
        private int ma;
        private String ten, nhom;
        private Double giamua, giaban, loinhuan;

    public MatHang(int ma, String ten, String nhom, Double giamua, Double giaban) {
        this.ma = ma;
        this.ten = ten;
        this.nhom = nhom;
        this.giamua = giamua;
        this.giaban = giaban;
        this.loinhuan = giaban - giamua;
    }

    @Override
    public int compareTo(MatHang o) {
        return (int) (1000 * (o.loinhuan - loinhuan));
    }
    public String toString()
    {
        return ma + " " + ten + " " + nhom +  " " + String.format("%.2f", loinhuan);
    }
        
}
