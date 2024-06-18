


/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Dell Gaming
 */
class MatHang implements Comparable<MatHang>{
      private String ma, ten, nhom;
      private Double giamua, giaban, loinhuan;

    public MatHang(String  ma, String ten, String nhom, Double giamua, Double giaban) {
        this.ma = ma;
        this.ten = ten;
        this.nhom = nhom;
        this.giamua = giamua;
        this.giaban = giaban;
        this.loinhuan = giaban - giamua;
    }
    public Object [] toObject()
    {
        return new Object [] {ma, ten, nhom, giamua, giaban, loinhuan};
    }

    @Override
    public int compareTo(MatHang o) {
        if(loinhuan > o.loinhuan) 
            return -1;
        return 1;
    }

   
}
